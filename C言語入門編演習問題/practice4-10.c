#include <stdio.h>

int main(void){
    int no;
    do{
        printf("³‚Ì®”‚ğ“ü—Í‚¹‚æF");
        scanf("%d", &no);
        if(no<=0)
            printf("©‘R”‚ğ“ü—Í‚¹‚æ");
    } while (no <= 0)
        printf("%d‚ğ‹t‚©‚ç“Ç‚Ş‚Æ", no);
        while(no > 0){
           printf("%d", no % 10);
        no /= 10;
        }
        return 0;
}