#include <stdio.h>
#include <stdlib.h>


int main() {
	
/*	int i;
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			printf(" %d \n",i);
	
		}
		
		
	} */
	int sayi,yuzler,onlar,birler;
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	
	yuzler=(sayi/100)*100;
	printf("yuzler basamag: %d",yuzler);
	
	
	
	
	
	return 0;
}
