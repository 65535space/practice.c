#include <stdio.h>

int main(void){
    int no;
    do{
        printf("���̐�������͂���F");
        scanf("%d", &no);
        if(no<=0)
            printf("���R������͂���");
    } while (no <= 0)
        printf("%d���t����ǂނ�", no);
        while(no > 0){
           printf("%d", no % 10);
        no /= 10;
        }
        return 0;
}