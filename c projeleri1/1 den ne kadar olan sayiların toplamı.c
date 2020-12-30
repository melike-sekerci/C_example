#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n,sayac=0,sayi,top=0;
	printf("bir n degeri giriniz:");
	scanf("%d",&n);
	oku:
		printf("sayi:");
		scanf("%d",&sayi);
		top=top+sayi;
		sayac=sayac+1;
		if(sayac<n)
		goto oku;
		else
		printf("sonuc:%d",top);
	
	
	
	
	
	
	
	
	return 0;
}
