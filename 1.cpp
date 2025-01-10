#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;
    int found = 0;

    printf("Isi array:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("Memeriksa...\n");
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            if (!found) {
                printf("ADA\n");
                printf("Lokasi bilangan yang sama: ");
            }
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("TIDAK ADA\n");
    } else {
        printf("\n");
    }

    return 0;
}