// practice 5-3 display number(5,4,3,2,1) from the begining
#include <stdio.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5}; //初期化

    for (int i = 4; i >= 0; i--) //要素の値を表示
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}