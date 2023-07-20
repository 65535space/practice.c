/*List6-13
Linear search (sequential search)*/

#include <stdio.h>

#define NUMBER 5
#define FAILED -1

//--- Search for element matching key from array v with n elements ---//
int search(const int v[],int key,int n){

    int i = 0;

    while (1){
        if(i==n)
            return FAILED;
        if(v[i] == key)
            return i;
        i++;
    }
}

int main(void){
    int ky, idx;
    int x[NUMBER];

    for (int i = 0; i < NUMBER; i++){
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }
    printf("Value to look for : ");
    scanf("%d", &ky);

    idx = search(x, ky, NUMBER);

    if(idx == FAILED)
        puts("\aSearch failed.");
    else
        printf("%d is in the %dth.\n", ky, idx + 1);

    return 0;
}