#include <stdio.h>

int main(void){
    int no;
    do{
        printf("正の整数を入力せよ：");
        scanf("%d", &no);
        if(no<=0)
            printf("自然数を入力せよ");
    } while (no <= 0)
        printf("%dを逆から読むと", no);
        while(no > 0){
           printf("%d", no % 10);
        no /= 10;
        }
        return 0;
}