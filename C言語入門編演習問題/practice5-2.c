// practice5-2
#include <stdio.h>

int main(void) {
    int a[5]; // int[5]Œ^‚Ì”z—ñ

    for (int i = 5; i > 0; i--) //—v‘f‚É’l‚ð‘ã“ü
        a[i] = i;

    for (int i = 5; i > 0; i--) //—v‘f‚Ì’l‚ð•\Ž¦
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}