#include <stdio.h>
#include <stdlib.h>

int carpim(int s1,int s2)
{
	int k;
	k=s1*s2;
	return k;
}
int toplam(int s1,int s2)
{
	int d;
	d=s1+s2;
	return d;
}
int main()
{
	int s1,s2,b,e;
	printf("s1 giriniz:");
	scanf("%d",&s1);
	printf("s2 giriniz:");
	scanf("%d",&s2);
	b=carpim(s1,s2);
	e=toplam(s1,s2);
	printf("carpim=%d \t toplam=%d",b,e);
}
