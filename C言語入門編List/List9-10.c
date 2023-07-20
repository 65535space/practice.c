/*List9-10*/

#include <stdio.h>

void str_dcount(const char s[],int cnt[])
{
    int i = 0;
    while(s[i]){
        if(s[i]>='0'&& s[i] <='9')
            cnt[s[i] - '0']++;
        i++;
    }
}

int main(void)
{
    int dcnt[10] = {0};
    char str[128];

    printf("enter the string :");
    scanf("%s", str);

    str_docount(str, dcnt);

    puts("Number of occurrences of numeric characters");
    for (int i = 0; i < 10;i++)
        printf("'%d' : %d\n", i, dcnt[i]);

    return 0;
}