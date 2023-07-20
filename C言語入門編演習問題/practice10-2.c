/*practice10-2*/

#include <stdio.h>
enum date { TOMORROW,
            YESTERDAY };
void decrement_date(int *y, int *m, int *c) {
    // check uru year
    printf("move\n");
    int uru = 0;
    if (*y % 4 == 0) { // Once every four years
        printf("move1\n");
        if (*c == 1 && *m == 3) { // March 1st
            uru++;
            printf("move2\n");
            if (*y % 100 == 0 && *y % 400 != 0) { /* Years that are divisible by 100
                                                    and not divisible by 400 are normal years.*/
                uru--;
                printf("move3\n");
            }
        }
    }

    if (*c == 1) {

        if (*m == 5 || *m == 7 || *m == 10 || *m == 12) {
            (*m)--;
            *c = 30;
            printf("move4\n");
        } else if (*m == 2 || *m == 3 || *m == 4 || *m == 5 || *m == 6 || *m == 7 || *m == 8 || *m == 9 || *m == 11) {
            (*m)--;
            *c = 31;
            printf("move5\n");
        } else {
            *m = 12;
            (*y)--;
            *c = 31;
            printf("move6\n");
        }

        if (*m == 3) {
            (*m)--;
            *c = 28;
            printf("move7\n");
        }

    } else {
        (*c)--;
        printf("move8\n");
    }

    if (uru != 0) { // uru year
        *m = 2;
        *c = 29;
        printf("move9\n");
    }
}

void increment_date(int *y, int *m, int *c) {
    // check uru year
    int uru = 0;
    if (*y % 4 == 0) {
        if (*c == 29 && *m == 2) {
            uru++;
            if (*y % 100 == 0 && *y % 400 != 0) {
                uru--;
            }
        }
    }

    if (uru != 0) { // uru year
        *m = 3;
        *c = 1;
    }

    if (*c == 31) {
        ++(*m);
        *c = 1;
        if (*m == 13) {
            *m = 1;
            ++(*y);
        }
    } else if (*c != 30 && uru == 0) {
        (*c)++;
    }

    if (*c == 30) {
        if (*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11) { // No 31st.
            (*m)++;
            *c = 1;
        } else
            (*c)++;
    }
}

int main(void) {
    int a, b, c, d;
    enum date da;

    printf("enter the year:");
    scanf("%d", &a);
    printf("enter the month:");
    scanf("%d", &b);
    printf("enter the date:");
    scanf("%d", &c);

    printf("Would you like to update tomorrow or yesterday?[tomorrow---0,yesterday---1] :");
    scanf("%d", &d);

    switch (da = d) {
    case 0:
        increment_date(&a, &b, &c);
        printf("tomorrow will be %4d/%2d/%2d\n", a, b, c);
        break;
    case 1:
        decrement_date(&a, &b, &c);
        printf("yesterday was %4d/%2d/%2d\n", a, b, c);
        break;
    }

    return 0;
}