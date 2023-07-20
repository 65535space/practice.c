// あいうえお
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力：");
    scanf("%d", &no);

    while (no >= 0)
    {
        printf("%d ", no);
        no--; // no??l???f?N???????g
    }
    printf("\n"); // ???s

    return 0;
}