#include <stdio.h>
#include <stdlib.h>

int fak(k){
	int i,c=1;
	
	for(i=1;i<=k;i++)
	{
	c=c*i;	
	}
	
	return c;
}
void main()
{
	int i,d;
	printf("bir sayi giriniz:");
	scanf("%d",&d);
	for(i=1;i<=d;i++)
	{
	printf("sonuc: %d\n",fak(i));
	}
}
