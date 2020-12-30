#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0)
	printf("soguk");
	else if(0<=sayi & sayi<=15)
	printf("ilik");
	else
	printf("sicak");
	
	
	
	
	
	
	
	
	return 0;
}
