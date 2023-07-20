/*List6C-1
Assign v to all elements of array m with n numbers of elements of type int[3].*/
void fill(int m[][3], int n, int v) {
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n; i++)
            m[i][j] = v;
    }

    //---Displays the values of all elements of an array m with n elements whose element type is int[3] ---//
    void mat_print(const int m[][3], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++)
                printf("%4d", m[i][j]);
            putchar('\n');
        }
    }
    int main(void) {
        int no;
        int x[2][3] = {0};
        int y[4][3] = {0};

        printf("Value to assign to all components:");
        scanf("%d", &n);

        fill(x, 2, no);
        fill(y, 4, no);

        printf("--- x ---\n");
        mat_print(x, 2);
        printf("--- y ---\n");
        mat_print(y, 4);

        return 0;
    }
}