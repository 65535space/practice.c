//�@�ǂݍ��񂾐����̌�����*��A���\���i�D���Ȃ����J��Ԃ��j

#include <stdio.h>

int main(void) {
    int retry;

    do {
        int no;
        do {
            printf("���̐�������͂���F");
            scanf("%d", &no);
            if (no <= 0)
                puts("\a���łȂ�������͂��Ȃ��悤�ɁB");
        } while (no <= 0);
        // no��0�ȏ�ƂȂ��Ă���
        for (int i = 1; i <= no; i++)
            putchar('*');
        putchar('\n');

        printf("������x�H[Yes�E�E�E0/No�E�E�E9] :");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}