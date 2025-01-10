#include <stdio.h>

int main() {
	for (int i = 0; i <= 10; i++) {
		printf("%d", 1 << i);
		if (i < 10) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}