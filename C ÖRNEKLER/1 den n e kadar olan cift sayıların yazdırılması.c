#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,sayac=0;
	printf("bir sayi giriniz:");
	scanf("%d",&n);
	
	art:
		sayac=sayac+2;
		printf("%d\n",sayac);
		if(sayac<n)
	goto art;
	
	
	
	
	
	
	
	return 0;
}
