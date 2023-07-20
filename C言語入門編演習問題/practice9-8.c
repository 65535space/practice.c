/*practice9-8*/
#include <stdio.h>

void put_stringr(const char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    for (int i = count; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

int main(void) {
    char s[] = "123abc";
    put_stringr(s);

    for (int i = 0; i < 5; i++)
        printf("%d ", i);
    return 0;
}