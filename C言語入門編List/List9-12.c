/*List9-12
Display an array of strings. (function version)*/
#include <stdio.h>

void put_strary(const char s[][6], int n) {
    for (int i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main() {
    char cs[][6] = {"Turbo", "NA", "EOHC"};

    put_strary(cs, 3);

    return 0;
}