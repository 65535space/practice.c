/*practice6-15*/

#include <stdio.h>

void put_count(int x) {
    printf("put_count : %d\n", x);
}

int main(void) {
    int a;
    printf("enter integers :");
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        put_count(i + 1);
    }

    return 0;
}