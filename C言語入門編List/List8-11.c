/*List8-11
Counting numeric characters read from standard input (2nd edn).*/

#include <stdio.h>

int main(void){
    int ch;
    int cnt[10] = {0};

    while((ch = getchar()) != EOF)
    if(ch >='0' && ch <= '9')
        cnt[ch - '0']++;

    puts("Number of occurrences of numeric characters");
    for (int i = 0; i < 10;i++)
    printf("'%d:%d\n", i, cnt[i]);

    return 0;
}