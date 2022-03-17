/*
Nama File : 16_TunjanganAnak.c
Deskripsi : {Menghitung besarnya upah yang diterima berdasarkan golongan dan jam kerja}
Nama : Adri Audifirst
NIM : 24060121140152
*/

#include <stdio.h>

int main(){
    // Kamus
    int anak, gol;
    // Algoritma
    printf("Masukkan jumlah anak: ");
    scanf("%d", &anak);
    printf("Masukkan jumlah gaji: ");
    scanf("%d", &gol);
    if (anak <= 3) {
        printf("Tunjangan anak: %.0f", anak*(0.1*gol));
    } else {
        printf("Tunjangan anak: %.0f", 3*(0.1*gol));
    }
    return 0;
}
