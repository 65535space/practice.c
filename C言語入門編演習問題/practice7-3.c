/*practice7-3*/

#include <stdio.h>

//---Returns the number of bits set in integer x---//
int count_bits(unsigned x) {
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

//--- returns the number of bits of an unsigned type ---//
int int_bits(void) {
    return count_bits(~0U);
}

//--- Display bit contents of unsigned type ---//
void print_bits(unsigned x) {
    for (int i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

unsigned rrotate(unsigned x, int n) {
    return x >> n | x << (32 - n);
}

unsigned lrotate(unsigned x, int n) {
    return x << n | x >> (32 - n);
}
unsigned x = 1024;

int main(void) {
    unsigned x = 1024;
    printf("bit value of 1024\n");

    print_bits(x);
    putchar('\n');
    int n;
    printf("enter the integer\n");
    scanf("%d", &n);
    print_bits(rrotate(x, n));
    putchar('\n');
    print_bits(lrotate(x, n));
    putchar('\n');

    return 0;
}