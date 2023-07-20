/*List6-9*/
// Display of read positive integer values in reverse order.

#include <stdio.h>

//---Read and return a positive integer value.---//
int scan_pint(void) {
    int tmp;

    do {
        printf("Enter a positive integer:");
        scanf("%d", &tmp);
        if (tmp <= 0)
            puts("\aDo not enter a non-positive number.");
    } while (tmp <= 0);
    return tmp;
}

//--- Returns the inverted value of a non-negative integer ---//
int rev_int(int num) {
    int tmp = 0;

    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return tmp;
}

int main(void) {
    int nx = scan_pint();
    printf("The reversed value is %d\n", rev_int(nx));

    return 0;
}