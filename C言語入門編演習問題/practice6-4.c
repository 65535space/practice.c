// practice6-4
#include <stdio.h>

int sqr(int n) {
    return n * n;
}
int pow4(int x) {
    return sqr(sqr(x));
}

int main() {
    int a;
    puts("enter integers");
    printf("integer a:");
    scanf("%d", &a);

    printf("the four power of a is %d", pow4(a));
}
