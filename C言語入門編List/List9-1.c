/*List9-1
Display the size of character literals.*/

#include <stdio.h>

int main(void){
    printf("sizeoof(\"123\") = %zu\n", sizeof("123"));
    printf("sizeoof(\"AB//tC/\") = %zu\n", sizeof("AB/tC/"));
    printf("sizeoof(\"abc\\0def\") = %zu\n", sizeof("abc\0def"));

    return 0;
}