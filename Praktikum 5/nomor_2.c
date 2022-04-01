/*
Nama File : nomor_2.c
Deskripsi : {soal UTS nomor 2, total lintasan yang dilalui}
Nama : Adri Audifirst
NIM : 24060121140152
*/



#include <stdio.h>
int main()
{
	int a[20],n,i,max,min;
	printf("Banyak lintasan Pak Kentos\n");
	scanf("%d",&n);
	printf("Jalur lintasan Pak Kentos\n",n);
	for(i=0;i< n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i< n;i++){
		if(a[i]>max){
		max=a[i];
		}
	}
		min=a[0];
		for(i=0;i< n;i++){
		if(a[i]< min){
		min=a[i];
		}
	}
	printf("Sehingga selisih terbesarnya adalah %d",max-min);
return 0;
}
