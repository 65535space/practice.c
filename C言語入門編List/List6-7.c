/*List6-7*/
// Show left-angled isosceles triangle with lower left right angle (function version).

#include <stdio.h>

//---Display of the symbol character '*' n times in succession.---//
void put_stars(int n)
{
    while(n-- > 0)
        putchar('*');
}

int main(void){
    int len;

    printf("Make a lower left right-angled isosceles triangle.\n");
    printf("short side of a geometric shape:");
    scanf("%d", &len);
    for (int i = 1; i <= len;i++){
        put_stars(i);
        putchar('\n');
    }

    return 0;
}