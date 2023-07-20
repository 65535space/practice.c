// practice5-6
#include <stdio.h>
#define NUMBER 256
int main(void) {
    int num;          // real number of data
    int atai[NUMBER]; // values of data

    do {
        printf("number of data :");
        scanf("%d", &num);
        if (num < 0 || num > NUMBER)
            printf("Numbers up to 256 must be used\n");
    } while (num < 0 || num > NUMBER);

    for (int i = 0; i < num; i++) {
        printf("%d”Ô :", i + 1);
        scanf("%d", &atai[i]);
    }
    printf("{%d,", atai[0]);
    for (int i = 1; i < num - 1; i++) {
        printf(" %d,", atai[i]);
    }
    printf(" %d}\n", atai[num - 1]);
    return 0;
}