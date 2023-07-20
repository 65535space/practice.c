/*practice8-10
数字の出現回数を*で表す*/

#include <stdio.h>

int main(void) {
    int ch;
    int cnt[10] = {0};

    while ((ch = getchar()) != EOF)
        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;

    puts("Number of occurrences of numeric characters");
    for (int i = 0; i < 10; i++) {
        printf("'%d':%d\n", i, cnt[i]);
        for (int j = 0; j < 10;j++){
            if(cnt[i]>=j+1){
                printf("*");
            }
        }
        putchar('\n');
    }
        return 0;
}
