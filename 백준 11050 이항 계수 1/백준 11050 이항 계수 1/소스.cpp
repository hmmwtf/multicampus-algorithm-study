#ifndef DONLINE_JUDGE
#define scanf scanf_s
#define printf printf_s
#endif

#include <stdio.h>

int main() {
    int n, k;
    int numerator = 1, denominator = 1, fountain = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        numerator *= i;
    }

    for (int j = 1; j <= k; j++) {
        denominator *= j;
    }

    for (int l = 1; l <= n - k; l++) {
        denominator *= l;
    }

    fountain = numerator / denominator;
    printf("%d\n", fountain);
    return 0;
}
