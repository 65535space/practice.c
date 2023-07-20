// “Ç‚İ‚ñ‚¾®”‚ÌŒÂ”‚¾‚¯–‚ğ˜A‘±•\¦ (for•¶)

#include <stdio.h>

int main(void) {
    int no;

    printf("³‚Ì®”F");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
        putchar('*');
    putchar('\n');

    return 0;
}