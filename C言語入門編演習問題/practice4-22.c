//�@practice4-22 Rewrite the program in List 4-19 to create a program that displays a horizontal rectangle.

#include <stdio.h>
// List4-19
int List0419(void) {
    int height, width;

    puts("�����`��\\�����܂��B");
    printf("�����F");
    scanf("%d", &height);
    printf("�����F");
    scanf("%d", &width);

    for (int i = 1; i <= height; i++) {  //�����`��height�s
        for (int j = 1; j <= width; j++) //�e�s��width��'*'��\��
            putchar('*');
        putchar('\n'); //���s
    }

    return 0;
}
// myANS
int myANS(void) {

    int a, b, max, min;

    puts("�����̒����`��\\�����܂��B");
    printf("��Ӂi���̂P�j�F");
    scanf("%d", &a);
    printf("��Ӂi���̂Q�j�F");
    scanf("%d", &b);
    if (a < b) {
        max = b;
        min = a;
    } else {
        max = a;
        min = b;
    }
    for (int i = 1; i <= min; i++) {   //�s
        for (int j = 1; j <= max; j++) //��
            putchar('*');
        putchar('\n'); //���s
    }

    return 0;
}

// trueANS
int main(void) {
    int n1, n2, i, j, height, wide;

    puts("�����̒����`�����܂��B");
    printf("��Ӂi���̂P�j�F");
    scanf("%d", &n1);
    printf("��Ӂi���̂Q�j�F");
    scanf("%d", &n2);

    if (n1 < n2) {
        height = n1;
        wide = n2;
    } else {
        height = n2;
        wide = n1;
    }

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= wide; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}