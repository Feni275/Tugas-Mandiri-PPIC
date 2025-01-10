#include <stdio.h>

int main() {
	int nilai[10];
	
	printf("Masukkan 10 nilai mahasiswa:\n");
	for (int i = 0; i < 10; i++) {
		printf("Nilai mahasiswa ke-%d ", i + 1);
		scanf("%d", &nilai[i]);
	}
	
	printf("Daftar nilai mahasiswa yang lulus (nilai >= 60):\n");
	for (int i = 0; i < 10; i++) {
		if (nilai[i] >= 60) {
			printf("%d", nilai[i]);
			if (i < 9) {
				printf(" ");
			}
		}
	}
	printf("\n");
	return 0;
}