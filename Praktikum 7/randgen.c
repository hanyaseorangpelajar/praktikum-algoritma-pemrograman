/*
Nama File : randgen.c
Deskripsi : sebuah program yang saya gunakan untuk menciptakan
			list yang berisi integer acak yang berurut (karena ini adalah list).
Nama : Adri Audifirst
NIM : 24060121140152
*/

#include <stdio.h>
#include <stdlib.h>

/*karena integer yang dihasilkan selalu random tergantung input user, untuk list integer yang saya gunakan sudah saya
buat sebagai ".h" file, yang digunakan nantinya dalam persoalan search saya.
program ini saya sertakan hanya sebagai suplemen untuk pengguna lain jika
ingin melakukan modifikasi pada list.*/

int main() {
    int first, diff, terms, value, sum=0, i;

    printf("input berapa banyak data yang ingin dihasilkan\n");	
    scanf("%d", &terms);

    printf("input suku awal dan beda\n");
    scanf("%d %d", &first, &diff);

    value = first;
    printf("data\n");
    for(i = 0; i < terms; i++) {
        printf("    %d,\n", value);
        sum += value;
        value = value + diff;
    }
 return 0;
}


