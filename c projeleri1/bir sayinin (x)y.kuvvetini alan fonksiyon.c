#include <stdio.h>
#include <stdlib.h>

int kuvvet(int k,int l)
{
	int i,c=1;
	for(i=1;i<=l;i++)
	{
		c=c*k;
	}
	return c;
	
	
}
int main()
{
	int u,a;
	printf("tabani giriniz:");
	scanf("%d",&a);
	printf("ussu giriniz:");
	scanf("%d",&u);
    printf("sonuc :%d",kuvvet(a,u));
}
