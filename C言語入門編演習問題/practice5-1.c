// �z��̊e�v�f�ɐ擪���珇��1�`�T�������ĕ\��
#include<stdio.h>

int main(void){
    int a[4];       // int[5]�^�̔z��

    for (int i =0;i<4;i++)      //�v�f�ɒl����
    a[i] = i;

    for(int i =0;i<4;i++)       //�v�f�̒l��\��
    printf("a[%d] = %d\n", i, a[i]);

    return 0;
}