#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_type(unsigned int type, unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - check if the file is an ELF file.
 * @e_ident: Pointer to array contain the ELF magical numbers.
 *
 * Description: If file isn’t ELF file - 98 is the exit code.
 */
void check_elf(unsigned char *e_ident)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if (e_ident[i] != 127 &&
            e_ident[i] != 'E' &&
            e_ident[i] != 'L' &&
            e_ident[i] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
  * print_magic - Print magical numbers of ELF header.
 * @e_ident: Pointer to array contain the ELF magical numbers.
 *
 * Description: Magical numbers are separated by space.
 */
void print_magic(unsigned char *e_ident)
{
    int i;

    printf("  Magic:   ");

    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", e_ident[i]);

        if (i == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * print_class - Print class of ELF header.
 * @e_ident: Pointer to array containing ELF class.
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");

    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_data - Print data of ELF header.
 * @e_ident: Pointer to array containing ELF data.
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");

    switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           %d",
           e_ident[EI_VERSION]);

    switch (e_ident[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
	break;
/**

    print_entry - Prints the entry point of an ELF header.

    @e_entry: The ELF entry point.

    @e_ident: A pointer to an array containing the ELF class.
    */
    void print_entry(unsigned long int e_entry, unsigned char *e_ident)
    {
    if (e_ident[EI_DATA] == ELFDATA2MSB)
    e_entry = ((e_entry >> 24) & 0xff) |
    ((e_entry << 8) & 0xff0000) |
    ((e_entry >> 8) & 0xff00) |
    ((e_entry << 24) & 0xff000000);

    printf(" Entry point address: %#lx\n", e_entry);
    }

/**

    close_elf - Close the opened ELF file.
    @elf: File descriptor of the opened ELF file.
    */
    void close_elf(int elf)
    {
    if (close(elf) == -1)
    {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
    exit(98);
    }
    }

/**

    main - Entry point.

    @argc: The argument count.

    @argv: The argument vector.

    Return: 0 on success, otherwise 1.
    */
    int main(int argc, char **argv)
    {
    int elf;
    unsigned char e_ident[EI_NIDENT];

    if (argc != 2)
    {
    dprintf(STDERR_FILENO, "Usage: %s <ELF_FILE>\n", argv[0]);
    exit(98);
    }

    elf = open(argv[1], O_RDONLY);

    if (elf == -1)
    {
    dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
    exit(98);
    }

    if (read(elf, e_ident, EI_NIDENT) == -1)
    {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
    }

    check_elf(e_ident);
    printf("ELF Header:\n");
    print_magic(e_ident);
    print_class(e_ident);
    print_data(e_ident);
    print_version(e_ident);
    print_osabi(e_ident);
    print_abi(e_ident);
    print_type(*((unsigned int )(e_ident + EI_TYPE)), e_ident);
    print_version(e_ident);
    print_entry(((unsigned long int *)(e_ident + EI_ENTRY)), e_ident);
    close_elf(elf);
    return (0);
    }


