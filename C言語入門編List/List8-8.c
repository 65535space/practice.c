/*List8-8
Copying input from standard input to standard output
*/
#include <stdio.h>

int main(void){
    int ch;

    while((ch=getchar()) != EOF)
        putchar(ch);

    return 0;
}