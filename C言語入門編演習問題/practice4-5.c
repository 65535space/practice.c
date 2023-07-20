#include <stdio.h>

int main(void) {
    int no;

    printf("³‚Ì®”‚ğ“ü—Í‚¹‚æF");
    scanf("%d", &no);

    int i = 1;
    while (i <= no) {
        printf("%d ", i++);
        if (i == i++) {
            printf("\n");
        }
    }
    return 0;
}