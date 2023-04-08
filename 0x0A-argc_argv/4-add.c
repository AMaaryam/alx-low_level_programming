#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
        int i, res = 1;

        if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
	
	for (i = 1; i < argc; i++)
        {
                res *= atoi(argv[i]);
        }
        printf("%d\n", res);
        return (0);
}
