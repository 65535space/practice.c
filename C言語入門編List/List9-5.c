/*List9-5
Format and display the string "12345".*/

#include <stdio.h>

int main(void){
    char str[] = "12345";

    printf("%s\n", str);
    printf("%3s\n", str);
    printf("%.3s\n", str);
    printf("%8s\n", str);
    printf("%-8s\n", str);

    return 0;
}