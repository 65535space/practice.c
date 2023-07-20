/*List11-8
Examples of strlen function usage*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[128];

    printf("string :");
    scanf("%s", str);

    printf("The length of the string " % s " is %zu \n", str, strlen(str));

    return 0;
}