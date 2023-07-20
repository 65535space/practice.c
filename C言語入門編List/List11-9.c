// Copy and display strings

#include <stdio.h>
#include <string.h>

int main(void) {
    char st[128];
    char s1[128], s2[128];

    printf("string :");
    scanf("%s", st);

    printf("s2 = \"%s\"\n", strcpy(s2, st));
    printf("s1 = \"%s\"\n", strcpy(s1, s2));

    return 0;
}