/*List10-2
Display the object's address.*/

#include <stdio.h>

int main() {
    int n;
    double x;
    int a[3];

    printf("adress of n :   %p\n", &n);
    printf("adress of x :   %p\n", &x);
    printf("adress of a[0] :%p\n", &a[0]);
    printf("adress of a[1] :%p\n", &a[1]);
    printf("adress of a[2] :%p\n", &a[2]);

    return 0;
}