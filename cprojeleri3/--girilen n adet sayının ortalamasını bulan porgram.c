#include <stdio.h>
#include <stdlib.h>


int main() {
	int adet,sayi,ort;
	int toplam=0,sayac=0;
	printf("adet sayisini giriniz:");
	scanf("%d",&adet);
	oku:
		printf("sayi:");
		scanf("%d",sayi);
		toplam=toplam+sayi;
		ort=toplam/adet;
		sayac=sayac+1;
		if(sayac<adet)
		goto oku;
		else
		printf("%d",ort);
	return 0;
}
