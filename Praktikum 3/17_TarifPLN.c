/*
Nama File : 17_TarifPLN.c
Deskripsi : {Menghitung besarnya tarif biaya listrik yang dikenakan}
Nama : Adri Audifirst
NIM : 24060121140152
*/

#include <stdio.h>

int main(){
    // Kamus
    int gol, listrik;
    // Algoritma
    printf("Masukkan golongan: ");
    scanf("%d", &gol);
    printf("Masukkan banyak penggunaan listrik: ");
    scanf("%d", &listrik);
    if (listrik < 100) {
        printf("%d", gol*1000*100);
    } else if (listrik >= 1000){
        printf("%.0f", (gol*1000*listrik)*1.1);
    } else {
        printf("%d", gol*1000*listrik);
    }
    return 0;
}
