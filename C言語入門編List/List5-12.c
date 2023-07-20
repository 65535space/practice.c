// List5-12 Reads students score and display distribution

#include <stdio.h>

#define NUMBER 120 // number of people upper limit

int main(void) {
    int num;             // real number of people
    int tensu[NUMBER];   // student scores
    int bunpu[11] = {0}; // distribution graph

    printf("input number of people :");

    do { // this do sentence is to limit reading number from 1~NUMBER
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\ainput number of people from 1~%d :", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("input %d people scores.\n", num);

    for (int i = 0; i < num; i++) {
        printf("number%2d :", i + 1);
        do { // this do sentence is to limit reading number from 1~100
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\ainput from 0~100 :");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    puts("\n---distribution graph---");
    printf("     100:");

    for (int j = 0; j < bunpu[10]; j++) // 100points
        putchar('*');
    putchar('\n');

    for (int i = 9; i >= 0; i--) { // less than 100 points
        printf("%3d ~%3d:", i * 10, i * 10 + 9);
        for (int j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}