//�@�ǂݍ��񂾐��̐����l���t���ɕ\��

#include <stdio.h>

int main(void) {
    int no;

    do {
        printf("���̐�������͂���F");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a���łȂ�������͂��Ȃ��ł�������");
    } while (no <= 0);

    // no��0���傫���Ȃ��Ă���
    printf("���̐����t������ނ�");
    while (no > 0) {
        printf("%d", no % 10); //�ŉ��ʂ̌��̒l��\��
        no /= 10;              //�E��1�����炷
    }
    puts("�ł��B");

    return 0;
}