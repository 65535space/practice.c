// practice10-3

#include <stdio.h>

void sort3(int *n1, int *n2, int *n3) {
    int temp;

    for (int i = 0; i < 3; i++) {
        if (*n1 > *n2) {
            temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        } else if (*n2 > *n3) {
            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }
}

int main(void) {
    int a, b, c;

    puts("enter three integers");
    printf("A:");
    scanf("%d", &a);
    printf("B:");
    scanf("%d", &b);
    printf("C:");
    scanf("%d", &c);

    sort3(&a, &b, &c);

    printf("Done sort!!\nA:%d\nB:%d\nC:%d\n", a, b, c);

    return 0;
}