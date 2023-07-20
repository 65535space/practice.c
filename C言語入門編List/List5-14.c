// Copy positive elements of array to another array

#include <stdio.h>

int main(void) {
    int a[5]; // sours array
    int b[5]; // destination array

    for (int i = 0; i < 5; i++) { // load value into into elements
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }

    int count = 0; // the number of copied elements
    for (int i = 0; i < 5; i++)
        if (a[i] > 0)          // if positive
            b[count++] = a[i]; // copy

    for (int i = 0; i < count; i++)
        printf("b[%d] = %d\n", i, b[i]);

    return 0;
}