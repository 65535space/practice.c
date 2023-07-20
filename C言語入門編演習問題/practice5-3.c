// practice 5-3 display number(5,4,3,2,1) from the begining
#include <stdio.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5}; //‰Šú‰»

    for (int i = 4; i >= 0; i--) //—v‘f‚Ì’l‚ð•\Ž¦
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}