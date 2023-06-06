#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int n;
	int temp, cnt = 0;

	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		for (int j = 2; j <= temp; j++) {
			if (temp == j) {
				cnt++;
			}
			if (temp % j == 0) {
				break;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}