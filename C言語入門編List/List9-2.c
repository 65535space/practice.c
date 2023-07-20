/*List9-2
Storing and displaying strings in arrays (Part 1: Assignment)*/

#include <stdio.h>

int main(void){
    char str[4];

    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';
    str[3] = '\0';
    printf("the string 'str' is \"%s\".\n" ,str);

    return 0;
}