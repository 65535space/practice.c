/*List6-11*/
// Find the highest score in English and math.

#include <stdio.h>

#define NUMBER 5

//--- Returns the maximum value of array v with n elements---//
int max_of(int v[], int n) {
    int max = v[0];

    for (int i = 1; i < n; i++)
        if (v[i] > max)
            max = v[i];
    return max;
}

int main(void) {
    int eng[NUMBER];
    int mat[NUMBER];

    printf("Enter the score of the %d person.\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("[%d] english : ", i + 1);
        scanf("%d", &eng[i]);
        printf("        math : ");
        scanf("%d", &mat[i]);
    }
    int max_e = max_of(eng, NUMBER);
    int max_m = max_of(mat, NUMBER);

    printf("Highest score in English = %d\n", max_e);
    printf("Highest score in math    = %d\n", max_m);

    return 0;
}
