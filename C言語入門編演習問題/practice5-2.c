// practice5-2
#include <stdio.h>

int main(void) {
    int a[5]; // int[5]�^�̔z��

    for (int i = 5; i > 0; i--) //�v�f�ɒl����
        a[i] = i;

    for (int i = 5; i > 0; i--) //�v�f�̒l��\��
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}