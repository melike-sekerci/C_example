#include <stdio.h>
#include <stdlib.h>

void fak(int k)
{
	int i,carpim=1;
	for(i=1;i<=k;i++)
	{
		carpim=carpim*i;
	}
	printf("%d",carpim);
}
void main(){
	int l;
	printf("bir sayi giriniz:");
	scanf("%d",&l);
	fak(l);
}
