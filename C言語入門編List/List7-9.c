/*list7-9*/
//0~65535 in decimal/binary/octal/hexadecimal
#include <stdio.h>

//--- unsigned型の整数xの下位ビットを表示---//
void print_nbits(unsigned x, unsigned n) {
    int i = sizeof(int) * 8 - 1;
    i = (n < i) ? n - 1 : i - 1;
    for (; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main() {
    for (unsigned i = 0; i <= 65535U; i++) {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf(" %06o %04X\n", i, i);
    }

    return 0;
}