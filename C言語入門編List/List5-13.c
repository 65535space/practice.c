// List5-13 copy all elements of array to another array

#include <stdio.h>

int main(void) {
    int a[5]; // source array
    int b[5]; // destination array

    for (int i = 0; i < 5; i++) { // lode a value into the element
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
        b[i] = a[i];

    puts(" a    b");
    puts("--------");
    for (int i = 0; i < 5; i++)
        printf("%4d%4d\n", a[i], b[i]);

    return 0;
}
