/*List11-4
Array of strings*/

#include <stdio.h>

int main(void){
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for (int i = 0; i < 3;i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);

    for (int i = 0; i < 3;i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);

    return 0;
    
}