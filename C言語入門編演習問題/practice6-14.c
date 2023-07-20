/*practice6-14*/
#include <stdio.h>

int main(void) {
    static double x[5];
    for (int i = 0; i < 5; i++) {
        printf("%f\n", x[i]);
    }
    return 0;
}