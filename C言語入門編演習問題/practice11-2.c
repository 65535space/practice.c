/*practice11-2*/

#include <stdio.h>

int main(void){
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    printf("%zu\n", sizeof(a)/sizeof(a[0]));
    printf("%zu\n", sizeof(p)/sizeof(p[0]));

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);

    for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);

    return 0;
    
}