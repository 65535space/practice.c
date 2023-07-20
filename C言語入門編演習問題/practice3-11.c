/*practice11-3*/

#include <stdio.h>
#define NUMBER 100000

int str_length(const char *s)
{
    int len = 0;
    while(*s++)
        len++;

    return len;
}

int main(void)
{
    char str[NUMBER];

    printf("enter the string :");
    scanf("%s", str);

    printf("The length of the string \"%s\" is %d.", str, str_length(str));

    return 0;
}