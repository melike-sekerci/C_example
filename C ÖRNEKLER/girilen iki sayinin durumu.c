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
		printf("iki deger esittir.");
	}
	
	else if (s1>s2)
    printf("buyuk olan sayi=%d",s1);
	
	else
	printf("buyuk olan sayi=%d",s2);
	
	
	
	return 0;
}
