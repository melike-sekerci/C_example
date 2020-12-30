#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(0<=sayi & sayi<=100)
	printf("EVET");
	else
	printf("HAYIR");
	return 0;
}
