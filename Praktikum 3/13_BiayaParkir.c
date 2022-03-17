/*
Nama File : 13_BiayaParkir.c
Deskripsi : {Menghitung besarnya biaya
			parkir berdasarkan lamanya parkir kendaraan}
Nama : Adri Audifirst
NIM : 24060121140152
*/
#include <stdio.h>
int main() {
    // Kamus
    int jam;
    // Algoritma
    printf("Masukkan lama parkir: ");
    scanf("%d", &jam);
    if (jam < 2) {
        printf("Biaya parkir: %d", 2000);
    } else {
        printf("Biaya parkir: %d", 2000 + (500*(jam-2)));
    }
    return 0;
}


