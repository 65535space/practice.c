//���K4�|17�@1����n�܂ł̐����l��2��l��\������v���O�������쐬����B

#include <stdio.h>

int main(void) {
    int n;
    printf("n�̒l�F");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    return 0;
}