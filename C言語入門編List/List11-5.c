/*List11-5
Checks the length of a string (traversal by pointer).*/

#include <stdio.h>

//---Returns the length of string s ---//
int str_length(const char *s)
{
    int len = 0;

    while(*s++)
        len++;
    return len;
}

int main(void)
{
    char str[128];

    printf("enter length of string :");
    scanf("%s", str);

    printf("The length of the string \"%s\" is %d.\n", str, str_length(str));

    return 0;
}