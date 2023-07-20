/*practice9-10*/
#include <stdio.h>

void del_digit(char s[]){
    int i = 0,del=0;
    while(s[i]){
        if(s[i] >='0'&&s[i]<='9')
            del++;
        else
            s[i - del] = s[i];

        i++;
        }
        s[i-del] = '\0';
}

int main()
{
    char s[] = "12AB3C4";
    del_digit(s);

    printf("%s", s);
    return 0;
}