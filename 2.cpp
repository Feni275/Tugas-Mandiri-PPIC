#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, harga_setelah_diskon, diskon;

    printf("Masukkan kode: ");
    scanf("%d", &kode);
    
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis);
    
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    if (jenis == 'A' || jenis == 'a') {
        diskon = 0.10; // 10%
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 0.15; // 15%
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 0.20; // 20%
    } else {
        printf("Jenis barang tidak valid!\n");
        return 1;
    }

    harga_setelah_diskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}
