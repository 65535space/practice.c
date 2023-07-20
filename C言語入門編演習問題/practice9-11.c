/*practice9-11*/
#include <stdio.h>
#define NUM 100
#define STR 128

int main() {
    char cs[NUM][STR];

    for (int i = 0; i < NUM; i++) {
        int j = 0;
        scanf("%s", cs[i]);

        if (cs[i][0] == '$' && cs[i][1] == '$' && cs[i][2] == '$' && cs[i][3] == '$' && cs[i][4] == '$')
            for (int j = 0; j < i; j++) {
                printf("cs[%d] = \"%s\"\n", j, cs[j]);
            }
    }

    return 0;
}