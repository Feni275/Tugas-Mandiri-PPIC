#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0;

    printf("Isi array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", A[i]);
    }
    printf("\n");

    printf("Masukkan karakter: ");
    scanf(" %c", &C);

    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\n");
        printf("%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}