#include <stdio.h>

int main(void) {

    int start, end, stepup;
    //F2�ŕϐ�����ς���
    printf("���p����F");
    scanf("%d", &start);
    printf("���p�܂ŁF");
    scanf("%d", &end);
    printf("���p���ƁF");
    scanf("%d", &stepup);

    for (start; start <= end; start += stepup) {
        printf("%dcm  %.2fkg\n", start, (double)(start - 100) * 0.9);
    }

    return 0;
}