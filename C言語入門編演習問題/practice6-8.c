/*practice6-8*/

#include <stdio.h>
#define NUMBER 5
int min_of(const int v[], int n){
    int min = v[0];
    for (int i = 0; i < n;i++){
        if(min > v[i])
            min = v[i];
    }
    return min;
}

int main(void){
    int v[NUMBER];
    for (int i = 0; i < 5; i++){
        printf("number %dth is : ", i);
        scanf("%d", &v[i]);
    }
    printf("the minimum values are : %d", min_of(v,NUMBER));

    return 0;
}