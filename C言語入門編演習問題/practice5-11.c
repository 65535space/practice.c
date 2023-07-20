// practice5-11
#include <stdio.h>

int main() {
    int math[6];
    int japanese[6];
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        printf("write %d math score:", i + 1);
        scanf("%d", &math[i]);
        sum += math[i];
    }
    printf("sum = %d\n", sum);
    printf("average = %f\n", (double)sum / 6);

    sum = 0;
    for (int i = 0; i < 6; i++) {
        printf("write %d japanese score:", i + 1);
        scanf("%d", &japanese[i]);
        sum += japanese[i];
    }
    printf("sum = %d\n", sum);
    printf("average = %f", (double)sum / 6);

    return 0;
}
