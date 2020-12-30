#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0 || 100<sayi)
	printf("EVET");
	else
	printf("HAYIR");
	
	return 0;
}
