/*A simple char type determines whether a signed type is an unsigned type*/

#include <limits.h>
#include <stdio.h>

int main(void) {
    printf("The char type of this implementation is %s\n", CHAR_MIN ? "signed type" : "unsigned type");
    return 0;
}