/*pracice8-7*/
#include <stdio.h>

int combination(int n, int r) {
    if (r == 0)
        return 1;
    else {
        return (n - r + 1) * combination(n, r - 1) / r;
    }
}

int main() {
    int n, r;
    scanf("%d", &n);
    scanf("%d", &r);

    printf("%d", combination(n, r));

    return 0;
}