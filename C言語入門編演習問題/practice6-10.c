/*practice6-10*/
#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n){
    int a;
    putchar('{');
    for (int i = 0; i < 3; i++) {
        a = v2[i];
        v1[i] = v2[n - 1 - i];
        v1[n - 1 - i] = a;
    }
    if(n % 2 == 0){
        ;
    }
    else{
        v1[n / 2] = v2[n / 2];
    }
    for (int i = 0; i < n; i++) {
        
        printf("v1[%d] is %d ", i, v1[i]);
    }
    putchar('}');
}


int main(void) {
    int v1[7], v2[7] = {0};
    for (int i = 0; i < 7; i++) {
        scanf("%d", &v2[i]);
    }
    intary_rcpy(v1, v2, 7);

    return 0;
}
