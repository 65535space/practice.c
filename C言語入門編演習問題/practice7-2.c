/*practice7-2*/

#include <stdio.h>

int count_bits(unsigned x) {
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void) {
    return count_bits(~0U);
}

void print_bits(unsigned x) {
    for (int i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main() {
    unsigned n = 1024;
    printf("Bit value of 1024\n");
    print_bits(n);
    putchar('\n');
    n *= 16;
    printf("Bit value of 1024*2^4\n");
    print_bits(n);
    putchar('\n');
    n /= 128;
    printf("bit value of 1024/128\n");
    print_bits(n);
    putchar('\n');

    return 0;
}
