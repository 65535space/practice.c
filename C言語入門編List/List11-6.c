// Copying strings
#include <stdio.h>

//---Copy string a to d---//
char *str_copy(char *d,const char *s)
{
    char *t = d;

    while (*d++ = *s++)
        ;
    return t;
}

int main(){
    char str[128] = "ABC";
    char tmp[128];

    printf("str = \"%s\"\n", str);
    printf("copy is");
    scanf("%s", tmp);

    str_copy(str, tmp);

    printf("str = \"%s\"\n", str);

    return 0;
}