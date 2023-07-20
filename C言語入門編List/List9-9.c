/*List9-9
Manipulate and display strings*/

#include <stdio.h>

void put_string(const char s[])
{
    int i = 0;
    while(s[i])
        putchar(s[i++]);
}

int main(void)
{
    char str[128];

    printf("enter the string :");
    scanf("%s", str);

    printf("you write");
    put_string(str);

    return 0;
}