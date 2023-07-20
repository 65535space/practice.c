/*practice9-5*/

#include <stdio.h>

int str_char(const char s[], int c) {
    for (int i = 0; i < c; i++) {
        if (s[i] == 'c') {
            return i;
        }
    }
    return -1;
}

int main(void) {
    char a[] = {"abcdefg"};
    char b[] = {"hijklmn"};

    printf("%d \n%d\n", str_char(a, 7), str_char(b, 7));

    return 0;
}