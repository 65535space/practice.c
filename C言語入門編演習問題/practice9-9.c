/*practice9-9*/
#include <stdio.h>

void rev_string(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%d ", count);
        count++;
    }
    putchar('\n');
    char a[1];
    for (int i = 0; i < (count / 2); i++) {
        a[0] = s[i];
        s[i] = s[count - 1 - i];
        s[count - 1 - i] = a[0];
        printf("%d\n", i);
    }

    int j = 0;
    while (s[j]) {
        putchar(s[j++]);
    }
}

int main(void) {
    char s[] = "123abc";
    printf("%s\n", s);
    rev_string(s);

    return 0;
}