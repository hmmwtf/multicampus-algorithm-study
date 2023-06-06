#include <stdio.h>

int main() {
    int a, b, c;
    int max, mid, min;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        // max 값 구하기
        if (a > b && a > c) {
            max = a;
        }
        else if (b > a && b > c) {
            max = b;
        }
        else {
            max = c;
        }

        // min 값 구하기
        if (a < b && a < c) {
            min = a;
        }
        else if (b < a && b < c) {
            min = b;
        }
        else {
            min = c;
        }

        // mid 값 구하기
        if ((a > b && a < c) || (a < b && a > c)) {
            mid = a;
        }
        else if ((b > a && b < c) || (b < a && b > c)) {
            mid = b;
        }
        else {
            mid = c;
        }

        if ((max * max) == (mid * mid) + (min * min)) {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }

    return 0;
}
