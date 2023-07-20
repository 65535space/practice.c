/*practice7-11*/
#include <stdio.h>
int main(void) {
    float x = 0.0;

    for (int i = 0; i <= 100; i++) {
        x += i / 100.0;
        printf("x = %f\n", x);
    }

    return 0;
}