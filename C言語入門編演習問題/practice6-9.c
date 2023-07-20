/*practice6-9*/
#include <stdio.h>

void rev_intary(int v[], int n) {
    int a;
    putchar('{');
    for (int i = 0; i < 3; i++) {
        a = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = a;
    }
    for (int i = 0; i < n;i++){
        printf(" %d ", v[i]);
    }
        putchar('}');
}

int main(void) {
    int v[7];
    for (int i = 0; i < 7; i++) {
        scanf("%d", &v[i]);
    }
    rev_intary(v, 7);

    return 0;
}
