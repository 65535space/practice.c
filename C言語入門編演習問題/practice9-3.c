/*practice9-3*/

#include <stdio.h>
#define NUM 4
int main(void) {
    char s[NUM][128];
    int n = 0;
    for (int i = 0; i < NUM; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        n++;
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            i = NUM;
        }
    }


    for (int i = 0; i < n; i++) {
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            for (int j = 0; j < n - 1; j++) {
                printf("s[%d] = \"%s\"\n", j, s[j]);
            }
        }
    }


    return 0;
}