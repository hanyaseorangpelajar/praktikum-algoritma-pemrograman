/*
Nama File	: sort.c
Deskripsi	: melakukan selection sort dan insertion sort dengan panjang array yang bebas.
Nama		: Adri Audifirst
NIM			: 24060121140152
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarr(int arr[], int n) {
    printf("[");
    if (n <= 10) {
        for (int i = 0; i < n; i++) {
            (i != n-1) ? printf("%d, ", arr[i]) : printf("%d", arr[i]);
        }
    } else {
        for (int i = 0; i < 5; i++) {
            printf("%d, ", arr[i]);
        } printf("..., ");
        for (int i = n-5; i < n; i++) {
            (i != n-1) ? printf("%d, ", arr[i]) : printf("%d", arr[i]);
        }
    }
    printf("]\n");
}

int* selectionSort(int arr[], int n) {
    // Kamus
    int minidx, i, j;
    // Algoritma
    int* temparr = (int*) malloc(n*sizeof(int));
    for (i = 0; i < n; i++) temparr[i] = arr[i];
    for (i = 0; i < n-1; i++) {
        minidx = i;
        for (j = i; j < n; j++) {
            if (temparr[j] < temparr[minidx]) minidx = j;
        }
        swap(&temparr[minidx], &temparr[i]);
    }
    return temparr;
}

int* insertionSort(int arr[], int n) {
    // Kamus
    int key, i, j;
    // Algoritma
    int* temparr = (int*) malloc(n*sizeof(int));
    for (i = 0; i < n; i++) temparr[i] = arr[i];
    for (i = 1; i < n; i++) {
        key = temparr[i];
        j = i - 1;
        while (j >= 0 && temparr[j] > key) {
            temparr[j + 1] = temparr[j];
            j = j - 1;
        }
        temparr[j + 1] = key;
    }
    return temparr;
}

int main() {
    // Kamus
    int arr[10] = {3, 6, 1, 9, 2, 5, 4, 7, 8, 10};
	int n = 10;
    // Algoritma
    printf("Sebelum di sort : ");
    printarr(arr, n);
    printf("------------------------------------------\n");
    int* selectionres = selectionSort(arr, n);
    printf("Selection sort : ");
    printarr(selectionres, n);
    printf("------------------------------------------\n");
    int* insertionres = insertionSort(arr, n);
    printf("Insertion sort : ");
    printarr(insertionres, n);
    return 0;
}
