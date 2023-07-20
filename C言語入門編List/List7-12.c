/*LIst7-12*/
// Repeat from 0.0 to 1.0 in increments of 0.01

#include<stdio.h>

int main(){
    for (float x = 0.0; x <= 1.0;x+=0.01)
        printf(" = %f\n", x);

    return 0;
}