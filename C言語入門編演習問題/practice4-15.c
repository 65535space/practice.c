#include <stdio.h>

int main(void) {

    int start, end, stepup;
    //F2で変数名を変える
    printf("何�pから：");
    scanf("%d", &start);
    printf("何�pまで：");
    scanf("%d", &end);
    printf("何�pごと：");
    scanf("%d", &stepup);

    for (start; start <= end; start += stepup) {
        printf("%dcm  %.2fkg\n", start, (double)(start - 100) * 0.9);
    }

    return 0;
}