/*practice8-6*/
#include <stdio.h>

int factorial(int n) {
    int a = 1;
    for (int i = 1; i <= n; i++) {
        a *= i;
    }
    return a;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", factorial(a));
    return 0;
}