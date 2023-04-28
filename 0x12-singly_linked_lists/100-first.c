#include <stdio.h>

/* Function that is automatically executed before main() */
void attribute((constructor)) first() {
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
