/*List9-8
Checking the length of a string*/

#include <stdio.h>

int str_length(const char s[])
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

int main(void)
{
    char str[128];

    printf("enter the string :");
    scanf("%s", str);

    printf("The length of the string \"%s\" is %d.\n", str, str_length(str));

    return 0;
}