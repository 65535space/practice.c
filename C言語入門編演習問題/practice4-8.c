//�ǂݍ��񂾐����̌���������A���\��
#include <stdio.h>

int main(void) {
    int no;

    printf("���̐����F");
    scanf("%d", &no);

    while (no-- > 0) {
        putchar('*');
        if (no < 0) {
            putchar('\n');
        }
    }
    return 0;
}