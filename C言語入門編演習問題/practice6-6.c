/*practice6-6*/
#include <stdio.h>

void alert(int n){
    for (int i = 0; i < n;i++){
        printf("\a");
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    alert(n);

    return 0;
}