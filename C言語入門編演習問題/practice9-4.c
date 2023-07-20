/*practice9-4*/

#include <stdio.h>

void null_string(char a[]){
    a[0] = '\0';
}

int main(void){
    char a[] = {"abcdefg"};
    null_string(a);
    printf("%s\n",a);

    return 0;
}