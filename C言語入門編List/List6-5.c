/*List6-5
find exponentiation*/

//---Return x to the nth power---//
double power(double x, int n) {
    double tmp = 1.0;

    for (int i = 1; i <= n; i++)
        tmp *= x;
    return tmp;
}

int main(void) {
    double a;
    int b;

    printf("find bth power of a.\n");
    printf("integer a:");
    scanf("%f", &a);
    printf("integer b:");
    scanf("%d", &b);

    printf("%.2f to the power of %d is %.2f.\n", a, b, power(a, b));

    return 0;
}