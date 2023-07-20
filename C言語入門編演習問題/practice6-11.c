/*practice6-11*/
#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[sum] = v[sum];
            sum += 1;
        }
    }
    printf("idx = {");
    for (int i = 0; i < sum; i++) {
        printf(" %d ", v[i]);
    }
    printf("}\n");
    return sum;
}

int main() {
    int v[7] = {12, 13, 52, 24, 12, 364, 23};
    int key = 12;
    int idx[7];
    printf("the number of key is %d ", search_idx(v, idx, key, 7));
    return 0;
}