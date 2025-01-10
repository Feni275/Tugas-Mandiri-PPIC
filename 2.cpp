#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int genap[11];
    int count = 0;

    for (int i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) {
            genap[count] = A[i];
            count++;
        }
    }

    printf("Nilai genap yang disimpan dalam array:\n");
    for (int i = 0; i < count; i++) {
        printf("%d", genap[i]);
        if (i < count - 1) {
        	printf(" ");
		}
    }
    printf("\n");
    return 0;
}