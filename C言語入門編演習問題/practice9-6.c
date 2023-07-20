/*practice9-6*/

#include <stdio.h>

int str_chnum(const char s[], int c){
    int a = 0;
    for (int i = 0; i < c;i++)
    {
        if(s[i]=='c')
        {
            a++;
        }
    }
    return a;
}

int main(void)
{
    char s[] = {"abcdefgcccc"};
    printf("%d", str_chnum(s, 11));

    return 0;
}