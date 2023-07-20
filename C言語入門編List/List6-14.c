/*List6-14
Sequential search (numbering system)*/
#include <stdio.h>

#define NUMBER 5
#define FAILED -1

//---Search for an element matching key from array v with n elements (Sentinel method)---//
int search(int v[], int key,int n){
    int i = 0;
    v[n] = key;
    while(1){
        if(v[i] == key)
            break;
        i++;
    }
    return i < n ? i : FAILED;
}

int main(void){
    int ky, idx;
    int x[NUMBER + 1];

    for (int i = 0; i < NUMBER;i++){
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("Value to look for :");
    scanf("%d", &ky);

    if((idx = search(x,ky,NUMBER)) == FAILED)
        puts("\aSearch failed.");
    else
        printf("%d is in the %dth.\n", ky, idx + 1);

    return 0;
}
