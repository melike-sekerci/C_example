#include <stdio.h>
#include <stdlib.h>

int karekok()
{
	int l,i;
	double x=1;
	
	printf("bir sayi giriniz:");
	scanf("%d",&l);
	
	
	for(i=0;i<=1000;i++)
	{
		x=0.5*(x+(l/x));
	}
	
	return x;
}
	
	

void main()
{
	double d;
	d= karekok();
	printf("sonuc:%2.f",d);
	
}
