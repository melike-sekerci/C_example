#include <stdio.h>
#include <stdlib.h>

double kare(double x)
{
	int k;
	k=x*x;
	return k;
}
void main()
{
	double d,c;
	printf("bir sayi giriniz:");
	scanf("%f",&d);
	
	printf("%f",kare(d));
	}
