/*List9-4
Ask for name and say hello (read string).*/

#include <stdio.h>

int main(void){
    char name[48];

    printf("May I have your name :");
    scanf("%s", name);  //not put &

    printf("hello,%s!!\n", name);

    return 0;
}