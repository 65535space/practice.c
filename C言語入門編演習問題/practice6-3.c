// practice6-3
#include <stdio.h>
int cube(int x) {
    return x * x * x;
}
int main() {
    int x;
    puts("enter the integers");
    printf("integer x:");
    scanf("%d", &x);

    printf("the cube value of x is %d\n", cube(x));
    return 0;
}