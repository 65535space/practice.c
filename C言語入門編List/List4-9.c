//�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�_�E��

#include <stdio.h>

int main(void) {
    int no;

    printf("���̐�������͂���F");
    scanf("%d", &no);

    int i = 0;
    while (i <= no) {
        printf("%d ", i++);
    }
    printf("\n");

    return 0;
}