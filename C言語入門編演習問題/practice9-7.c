/*practice 9-7*/

#include <stdio.h>

void put_stringn(const char s[],int n){
    for (int i = 0; i < n;i++)
        printf("%s", s);
}

int main(void){
    char s[] = "abcdefg";
    put_stringn(s,3);

    return 0;
}