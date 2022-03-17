/*
Nama File : 15_HargaDiskon.c
Deskripsi : {Menghitung besarnya upah yang diterima berdasarkan golongan dan jam kerja}
Nama : Adri Audifirst
NIM : 24060121140152
*/

#include <stdio.h>

int main(){
    // Kamus
    int gol, jam;
    // Algoritma
    printf("Pilih golongan (1/2/3/4): ");
    scanf("%d", &gol);
    printf("Masukkan banyak jam kerja: ");
    scanf("%d", &jam);
    if (jam < 40) {
        printf("Upah kerja: %d", (1000 + ((gol-1)*500))*jam);
    } else {
        printf("Upah kerja: %d", ((1000 + ((gol-1)*500))*40) + ((((1000 + ((gol-1)*500))*(jam-40)*3)/2)));
    }
    return 0;
}

