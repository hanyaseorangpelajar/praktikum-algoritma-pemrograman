/*
Nama File : cari.c
Deskripsi : melakukan binary search index suatu integer dalam list.
Nama : Adri Audifirst
NIM : 24060121140152
*/

#include <stdio.h>
#include <stdlib.h>
#include "randnum.h"

int binarySearch(int arr[], int n, int x) {
    // Kamus
    int a = 0, b = n-1;
    // Algoritma
    while (a <= b) {
        int m = a + (b - a) / 2;
        if (arr[m] == x)
		return m;
        else if (arr[m] < x) a = m + 1;
        else b = m - 1;
    }
    return -1;
}

int main() {
    // Kamus
    int x, resBinary;
    // Algoritma
    printf("Masukkan angka yang akan dicari (tapi jangan negatif ya :D): ");
    scanf("%d", &x);
    resBinary = binarySearch(arr, n, x);
    (resBinary != -1) ? printf("integer %d terletak pada indeks ke-%d", x, resBinary) : printf("integer %d tidak terdapat pada list", x);
    return 0;
}
