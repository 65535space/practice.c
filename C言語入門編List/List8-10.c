/*List-8-10
display EOF values and numeric character values.*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void sub(void) {
    FILE *fp = NULL;

    fp = fopen("utf-8.png", "r");
    if (fp == NULL) {
        printf("failed");
    } else {
        printf("file opened");
        fclose(fp);
    }
}
int main(void){
    printf("EOF = %d\n", EOF);
    printf("'0' = %d\n", '0');
    printf("'1' = %d\n", '1');
    printf("'2' = %d\n", '2');
    printf("'3' = %d\n", '3');
    printf("'4' = %d\n", '4');
    printf("'5' = %d\n", '5');
    printf("'6' = %d\n", '6');
    printf("'7' = %d\n", '7');
    printf("'8' = %d\n", '8');
    printf("'9' = %d\n", '9');
    sub();
    return 0;
}