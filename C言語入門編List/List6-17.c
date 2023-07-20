/*List6-17
Check the valid range of identifiers*/

#include <stdio.h>

int x = 75;

void print_n(void) {
    printf("x= %d\n", x);
}

int main(void) {
    int x = 999;

    print_x();

    printf("x = %d\n", x);

    for (int i = 0; i < 5; i++) {
        int x = i * 100;
        printf("x=%d\n", x);
    }

    printf("x=%d\n", x);

    return 0;
}