#include <stdio.h>
#include <stdlib.h>



int main() {
	int x,y;
	printf("kucuk degeri giriniz:");
	scanf("%d",&x);
	
	printf("buyuk degeri giriniz:");
	scanf("%d",&y);
	int sayac=x,toplam=0;
	art:
		sayac=sayac+1;
		toplam=toplam+sayac;
		if(sayac+1<y)
		goto art;
		printf("%d",toplam);
	return 0;
}
