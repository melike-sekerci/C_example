#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,sayac=0,carpim=1;
	printf("faktöriyeli alinacak sayiyi giriniz:");
	scanf("%d",n);
	oku:
		sayac++;
		if(sayac<=n){
			carpim=carpim*sayac;
		    goto oku;
			
		}
		
		
		printf("sonuc:%d",carpim);
	
	
	return 0;
}
