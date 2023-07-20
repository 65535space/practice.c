/*List7-7
Displays the left and right shifted value of unsigned type*/

#include <stdio.h>

int count_bits(unsigned x) {
    int bits = 0;
    while (x) {
        if (x & 1U)
            bits++;
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

int main(void) {
    unsigned x, n;

    printf("non-negative integer     :");
    scanf("%u", &x);
    printf("number of bits to shift");
    scanf("%u", &n);

    putchar('\n');
    printf("integer        = ");
    print_bits(x);
    putchar('\n');
    printf("left shift     = ");
    print_bits(x << n);
    putchar('\n');
    printf("right shift    = ");
    print_bits(x >> n);
    putchar('\n');

    return 0;
}