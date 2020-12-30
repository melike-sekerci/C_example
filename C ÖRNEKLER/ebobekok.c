#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
	
	
	printf("***OBEB OKEK BULMA*** \n\n\n");
	int sayi1,sayi2,kucuksayi;
	int i , obeb = 1,sonuc;
	
	 printf("Birinci sayiyi giriniz:");
	 scanf("%d",&sayi1);
	 
	 printf("Ikinci sayiyi giriniz:");
	 scanf("%d",&sayi2);
	 
	 if (sayi1 < sayi2)
	 kucuksayi=sayi1;
	else
	kucuksayi=sayi2;
	
	for(i=2;i<=kucuksayi;i++)
	{ 
	if(sayi1%i==0 && sayi2%i==0)
	obeb=i;
	}
	sonuc=(sayi1*sayi2)/obeb;
	printf("OKEK(%d,%d) = %d \n \n \n",sayi1,sayi2,sonuc);
	
	
	
	for(i=1;i<=kucuksayi;i++)
	{ 
	if(sayi1%i==0 && sayi2%i==0)
	sonuc=i;
	}
	printf("OBEB(%d,%d) = %d \n \n \n",sayi1,sayi2,sonuc);
	getch();
	
	
	
	
	return 0;
}
