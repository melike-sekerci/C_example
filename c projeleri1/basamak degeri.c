#include <stdio.h>
#include <stdlib.h>


int main() {
	
       	printf("*****BASAMAK DEGERI BULMA***** \n \n \n");
	int sayi,yuzler,onlar,birler,basamakdegeri;
	
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	
     
	yuzler=(sayi/100)*100;
	printf("yuzler basamagi: %d \n",yuzler);
	
	onlar=sayi/10;
	onlar=(onlar%10)*10;
	printf("onlar basamagi: %d \n",onlar);
	
	birler=sayi%10;
	printf("birler basamagi: %d \n",birler);
	
	basamakdegeri=yuzler+onlar+birler;
	printf("basamak degeri: %d ",basamakdegeri);
	
	
	return 0;
}
