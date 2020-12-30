#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int s1,s2;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&s1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&s2);
	
	if(s1==s2)
	{
		printf("iki sayi esittir.");
		
	}
	else if(s1>s2)
	printf("%d daha buyuktur.",s1);
	else
	printf("%d daha buyuktur.",s2);
	
	
	
	
	
	return 0;
}
