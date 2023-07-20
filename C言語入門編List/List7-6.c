/*List7-6
bitwise logical operations*/

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
    unsigned a, b;

    printf("Enter two non-negative integers.\n");
    printf("a :");
    scanf("%u", &a);

    printf("b :");
    scanf("%u", &b);

    putchar('\n');
    printf("a       =");
    print_bits(a);
    putchar('\n');
    printf("b       =");
    print_bits(b);
    putchar('\n');
    printf("a & b   =");
    print_bits(a & b);
    putchar('\n');
    printf("a | b   =");
    print_bits(a | b);
    putchar('\n');
    printf("a ^ b   =");
    print_bits(a ^ b);
    putchar('\n');
    printf("~a      =");
    print_bits(~a);
    putchar('\n');
    printf("~b      =");
    print_bits(~b);
    putchar('\n');

    return 0;
}