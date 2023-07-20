/*List8-5
Read and sort student height.*/

#include <stdio.h>

#define NUMBER 5

//---bubble sort---//
void bsort(int a[],int n){
    for (int i = 0; i < n - 1;i++){
        for (int j = n - 1; j > i;j--){
            if(a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

int main(void){
    int height[NUMBER];

    printf("Enter the height of the %d person.\n", NUMBER);
    for (int i = 0; i < NUMBER;i++){
        printf("NUMBER %2d : ", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER);      //sort

    puts("Sorted in ascending order.");
    for (int i = 0; i < NUMBER;i++){
        printf("NUMBER %2d : %d\n", i + 1, height[i]);
    }
    return 0;
}