//読み込んだ整数値だけ＊を縦に連続表示
#include <stdio.h>
int main(void){
    int no;
    printf("正の整数：");
    scanf("%d", &no);
    while(no-- > 0){
        puts("＊");
    }
    return 0;
}