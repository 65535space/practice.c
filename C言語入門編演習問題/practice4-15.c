#include <stdio.h>

int main(void) {

    int start, end, stepup;
    //F2‚Å•Ï”–¼‚ğ•Ï‚¦‚é
    printf("‰½‡p‚©‚çF");
    scanf("%d", &start);
    printf("‰½‡p‚Ü‚ÅF");
    scanf("%d", &end);
    printf("‰½‡p‚²‚ÆF");
    scanf("%d", &stepup);

    for (start; start <= end; start += stepup) {
        printf("%dcm  %.2fkg\n", start, (double)(start - 100) * 0.9);
    }

    return 0;
}