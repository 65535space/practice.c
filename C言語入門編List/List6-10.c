/*List 6-10*/
// Seek the highest score

#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);

int main(void){
    extern int tensu[];

    printf("Enter the score of %d person.\n", NUMBER);
    for (int i = 0; i < NUMBER;i++){
        printf("%d : ", i + 1);
        scanf("%d", &tensu[i]);
    }
    printf("highest score = %d\n" ,top());

    return 0;
}
//---Function definition of the function top, which returns the maximum value of the array tensu.---//
int top(void){
    extern int tensu[];
    int max = tensu[0];

    for (int i = 1; i < NUMBER;i++)
    if(tensu[i]>max)
        max = tensu[i];
    return max;
}