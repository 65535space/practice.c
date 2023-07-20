/*LIst7-13*/
// Repeat from 0.0 to 1.0 in increments of 0.01(controlled by an integer)

#include <stdio.h>

int main() {

    float x;
    for (int i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("x = %f\n", x);
    }

    return 0;
}