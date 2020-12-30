#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x,y;
	printf("bir deger giriniz:");
	scanf("%d",&x);
	
	printf("bir deger giriniz:");
	scanf("%d",&y);
	int sayac=x;
	oku:
		
	sayac=sayac+1;
	
	printf("%d \n",sayac);
	if(sayac+1<y)
	{
		
		goto oku;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
