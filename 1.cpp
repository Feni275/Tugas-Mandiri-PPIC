#include <stdio.h>

int main() {
	for (int i = 1; i <= 10; i++) {
		printf("%d", i * 10);
		if (i < 10) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}