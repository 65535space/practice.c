/*List6-8*/
// Show right-angled isosceles triangle with lower right angle (function version).

#include <stdio.h>

//--- Display of n consecutive character ch. ---//
void put_chars(int ch,int n){
    while (n-->0)
        putchar(ch);
}

int main(void){
    int len;

    printf("Create a right-bottom right-angled isosceles triangle.\n");
    printf("Short side:");
    scanf("%d", &len);

    for (int i = 1; i <= len;i++){
        put_chars(' ', len - i);
        put_chars('*', i);
        putchar('\n');
    }

    return 0;
}