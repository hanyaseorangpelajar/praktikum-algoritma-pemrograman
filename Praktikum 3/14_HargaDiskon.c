/*
Nama File : 14_HargaDiskon.c
Deskripsi : {Menghitung besarnya harga setelah diberikan diskon}
Nama : Adri Audifirst
NIM : 24060121140152
*/

#include <stdio.h>

int main(){
    // Kamus
    char diskon;
    float harga;
    // Algoritma
    printf("Pilih kategori diskon (A/B/C): ");
    scanf("%s", &diskon);
    printf("Masukkan harga: ");
    scanf("%f", &harga);
    switch (diskon) {
        case 'A':
            printf("Harga setelah diskon: %.0f", harga*90/100);
            break;
        case 'B':
            printf("Harga setelah diskon: %.0f", harga*85/100);
            break;
        case 'C':
            printf("Harga setelah diskon: %.0f", harga*80/100);
            break;
    }
    return 0;
}
