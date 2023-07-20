/*practice8-4*/
#include <stdio.h>
#define NUMBER 5

void bsort(int a[],int n){
    int tmp;
    for (int i = 0; i < n-1;i++){
        for (int j = 0; j < n -1- i;j++){
            if (a[j] > a[j + 1]) {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(void) {
    int height[NUMBER];

    printf("Enter the height of the %d person.\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("NUMBER %2d : ", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER); // sort

    puts("Sorted in ascending order.");
    for (int i = 0; i < NUMBER; i++) {
        printf("NUMBER %2d : %d\n", i + 1, height[i]);
    }
    return 0;
}