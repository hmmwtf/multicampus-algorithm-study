#include <stdio.h>
#include <string.h>

int main() {
	int i, j, result;
	char arr[100000];

	while (scanf("%s", arr) && arr[0] != '0') {
		result = 1;
		j = strlen(arr);

		for (i = 0; i < j / 2; i++) {
			if (arr[i] != arr[j - 1 - i]) {
				result = 0;
				break;
			}
		}

		if (result == 1) {
			printf("yes\n");
		}
		else if (result == 0) {
			printf("no\n");
		}
	}

	return 0;
}