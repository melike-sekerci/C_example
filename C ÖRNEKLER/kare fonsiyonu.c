#include <stdio.h>
#include <stdlib.h>


double kare(int a)
{
	int k;
	k=a*a;
	return k;
}
void main()
{
	int i,c;
	printf("bir sayi giriniz:");
	scanf("%d",&i);
	c=kare(i);
	printf("%d",c);
}
