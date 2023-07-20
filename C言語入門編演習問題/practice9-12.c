/*practice9-11*/
#include <stdio.h>
#define NUM 3
#define STR 14

void rev_strings(char s[][STR], int n) {
    char a;
    for (int j = 0; j < n; j++) {
        int count = 0;                          //count number of strings
        for (int i = 0; s[j][i] != '\0'; i++) { //count
            count++;
            printf("%d ", count);
        }

        putchar('\n');
        for (int i = 0; i < (count - 1) / 2; i++) {
            a = s[j][i];
            s[j][i] = s[j][count - i];
            s[j][count - i] = a;
        }
    }
}

int main() {
    char cs[NUM][STR] = {"aiueo", "kakikukeko", "sasisuseso"};

    //  for (int i = 0; i < NUM; i++)
    //   scanf("%s", cs[i]);
    rev_strings(cs, NUM);
    for (int i = 0; i < NUM; i++)
        printf("cs[%d] = \"%s\"\n", i, cs[i]);

    return 0;
}