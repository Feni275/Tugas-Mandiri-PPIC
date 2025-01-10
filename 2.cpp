#include <stdio.h>

int main() {
	for (int i = 100; i >= 55; i -= 5) {
		printf("%d", i);
		if (i > 55) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}