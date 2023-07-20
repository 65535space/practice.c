/*List11-3
Rewriting strings with pointers*/

#include <stdio.h>

int main(void) {

    char *p = "123";

    printf("p = \"%s\"\n", p);

    p = "456" + 1; // The pointer p points to the address of the string literal 1, so it will point to the address one behind it.

    printf("p = \"%s\"\n", p);

    return 0;
}