/*practice7-4*/
//--- Display bit contents of unsigned type ---//
#include <stdio.h>
void print_bits(unsigned x) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}
unsigned set(unsigned x, int pos) {
    unsigned a = 1U;
    a <<= pos-1;
    x |= a;
    return x;
}

unsigned reset(unsigned x, int pos) {
    unsigned a = ~0U;
    unsigned b = 1U;
    unsigned c = 1U;
    for (int i = 0; i < pos; i++) {
        b *= 2;
    }
    b -= 1;
    for (int i = 0; i < pos - 1; i++) {
        c *= 2;
    }
    c -= 1;
    a += -b + c;
    x &= a;
    return x;
}

unsigned inverse(unsigned x, int pos) {
    unsigned a = 1U;
    a <<= pos-1;
    x ^= a;
    return x;
}

int main(void) {
    unsigned x;
    int pos;
    printf("integer of x:2863311530\n");
    x = 2863311530;
    printf("Change the fourth bit.\n");
    pos = 4;
    printf("\nSet the fourth bit   :");
    print_bits(set(x, pos));
    printf("\nReset the fourth bit :");
    print_bits(reset(x, pos));
    printf("\nInvert the fourth bit:");
    print_bits(inverse(x, pos));

    return 0;
}