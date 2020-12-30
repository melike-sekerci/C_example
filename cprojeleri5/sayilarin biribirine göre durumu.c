#include <stdio.h>
#include <stdlib.h>


int main() {
	int s1;
	printf("bir sayi giriniz:");
	scanf("%d",&s1);
	if(s1==10)
	{
		printf("%d esittir 10 a",s1);
	}
	else if(s1>10)
	printf("%d daha buyuktur 10 dan",s1);
	
	else      
	printf("10 daha buyuktur.");
	
	
	
	
	return 0;
}
