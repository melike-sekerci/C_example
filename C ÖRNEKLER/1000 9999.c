#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,sayi,birler,onlar,yuzler,binler,k;
	printf ("4 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	
	
	binler=sayi/1000;
	printf("%d \n",binler);
	
	yuzler=sayi/100;
	yuzler=yuzler%10;
	printf("%d \n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("%d \n",onlar);
	 
	 birler=sayi%10;
	 printf("%d \n",birler);
	
	
	k=binler*binler*binler*binler+yuzler*yuzler*yuzler*yuzler+onlar*onlar*onlar*onlar+birler*birler*birler*birler;
	

    	printf("%d \n",k);
	
	
	return 0;
}
