#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
/*	int sayi;
	sayi=11;
	
	if(sayi%2==0)
	{
		printf("sayi cift");
	}
	
	else
	{
		printf("sayi tek");
	}  */
	
/*	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
 if(sayi%5==0)
 {
	printf("girilen sayi besin kati");
 }
	
  else
  {
  printf("girilen sayi besin kati degildir.");	
	}	
	
	*/
	
	
/*	int sayi;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0)
	{
		printf("girdiðiniz sayi 3 ve 5 in ortak katidir.");
	}
	
	else
	{
		printf("girdiginiz sayi 3 ve 5 in ortak kati degildir. ");
	} */
	
/*	int su;
	printf("suyun derecesini giriniz:");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("su kati haldedir.");
	}
	
	
	if(su>0 && su<=100)
	{
		printf("su sivi haldedir.");
	}
	
	
	if(su>100)
	{
		printf("su gaz haldedir.");
	} */
	
	
	int sinav1,sinav2,sinav3,proje,ortalama;
	printf("birinci sinav notunuzu giriniz:");
	scanf("%d",&sinav1);
	
	printf("ikinci sinav notunuzu giriniz:");
	scanf("%d",&sinav2);
	
	printf("ucuncu sinav notunuzu giriniz:");
	scanf("%d",&sinav3);
	
	printf("proje notunuzu giriniz:");
	scanf("%d",&proje);
	
	ortalama=(sinav1+sinav2+sinav3+proje)/4;
	printf("not ortalamaniz: %d \n",ortalama);
	if(ortalama<50)
	{
		printf("ff");
	}
	
	
	if(ortalama>=50 && ortalama<60)
	{
		printf("dd");
	}
	
	if(ortalama>=60 && ortalama<70)
	{
		printf("cc");
	
	}
	
	if(ortalama>=70 && ortalama<85)
	{
		printf("bb");
	}
	
	
	if(ortalama>=85)
	{
		printf("aa");
	}
	
	
	
	
	return 0;
}
