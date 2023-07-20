#include <stdio.h>

int main(void) {
    int no;

    printf("³‚Ì®”‚ð“ü—Í‚¹‚æF");
    scanf("%d", &no);

    while (no >= 1) {
        printf("%d ", no--);
        if (no < 0) {
            printf("\n");
        }
    }
    return 0;
}