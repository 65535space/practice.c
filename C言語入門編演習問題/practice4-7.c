#include <stdio.h>

int main(void) {

    int no;
    printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚¿‚åF");
    scanf("%d", &no);
    int i = 1;
    while (i < no) {
        printf("%d ", i * 2);
        i++;
        if (i * 2 > no) {
            break;
        }
    }
    return 0;
}