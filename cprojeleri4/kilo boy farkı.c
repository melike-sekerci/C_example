,#include <stdio.h>
#include <stdlib.h>

void fark()
{
	int i,j,farki=0;
	printf("kiloyu giriniz:");
	scanf("%d",&i);
	printf("boyu giriniz:");
	scanf("%d",&j);
	farki=i-j;
}
void main()
{
	printf("sonuc:%d",fark());
}
