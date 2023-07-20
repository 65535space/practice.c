/*List7-5
Find the number of elements in an array*/

#include <stdio.h>

int main(void) {
    int a[5];
    double x[7];

    printf("number of elements in array a =%zu\n", sizeof(a) / sizeof(a[0]));
    printf("number of elements in array x =%zu\n", sizeof(x) / sizeof(x[0]));

    return 0;
}