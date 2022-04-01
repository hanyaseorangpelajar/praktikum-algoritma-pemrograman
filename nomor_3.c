/*
Nama File : nomor_3.c
Deskripsi : {soal UTS nomor 3, jumlah sub array}
Nama : Adri Audifirst
NIM : 24060121140152
*/




#include <stdio.h>

int main(){
    // Kamus
    	int x, i, j, sum;
    // Algoritma
    	printf("Masukkan banyak elemen : ");
    	scanf("%d", &x);
    	int T[x];
    	sum = 0;

    	for (i = 0; i < x; i++)
		scanf("%d", &T[i]);

    	for (i = 0; i < x; i++) {
        	printf("(");
        	for (j = i; j < x; j++) {
            	sum += T[j];
            	if (j != x-1){
            		printf("%d + ", T[j]);
            	}
            	else{
            		printf("%d", T[j]);
            	}
        	}
       		if (i != x-1){
        		printf(") + ");
        	}
        	else{
        		printf(")");
        	}
    	}
    	printf("\nMaka penjumlahan sub array/tabel adalah = %d", sum);
    return 0;
}
