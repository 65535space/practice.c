/*List7-8
Set/Reset/Invert Least Significant Bit*/

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

int main(void) {
    unsigned n;
    printf("non-negative integer :");
    scanf("%u", &n);

    putchar('\n');
    printf("original value = ");
    print_bits(n);
    putchar('\n');
    printf("set            = ");
    print_bits(n | 1U);
    putchar('\n');
    printf("reset          = ");
    print_bits(n & ~1U);
    putchar('\n');
    printf("invert         = ");
    print_bits(n ^ 1U);
    putchar('\n');

    return 0;
}