// ”z—ñ‚Ì‘S—v‘f‚Ì•À‚Ñ‚ð”½“]‚·‚é
#include <stdio.h>

int main(void) {
    int x[7];

    for (int i = 0; i < 7; i++) { //—v‘f‚É’l‚ð“Ç‚Ýž‚Þ
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }

    for (int j = 0; j < 3; j++) { //—v‘f‚Ì•À‚Ñ‚ð”½“]
        int t = x[j];
        x[j] = x[6 - j];
        x[6 - j] = t;
    }

    puts("”½“]‚µ‚Ü‚µ‚½B");
    for (int i = 0; i < 7; i++) //—v‘f‚Ì’l‚ð•\Ž¦
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}