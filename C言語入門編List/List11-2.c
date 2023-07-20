/*List11-2
Rewriting strings by array*/

#include <stdio.h>

int main(void){
    char s[] = "ABC";

    printf("s = \"%s\"\n", s);

    s = "DEF";      //error

    printf("s = \"%s\"\n", s);

    return 0;
}