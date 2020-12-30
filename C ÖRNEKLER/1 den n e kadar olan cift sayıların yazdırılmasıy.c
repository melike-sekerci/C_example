#include <stdio.h>
#include <stdlib.h>

void cift(int k)
{
	int s;
	for(s=2;s<=k;s=s+2)
	{
		printf("%d \n",s);
	}
}
void main()
{
	int s;
	printf("bir sayi giriniz:");
	scanf("%d",&s);
	cift(s);
	return 0;
}
