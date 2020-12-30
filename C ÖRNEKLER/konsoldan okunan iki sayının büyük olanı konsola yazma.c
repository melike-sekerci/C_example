#include <stdio.h>
#include <stdlib.h>

void buyuk(int s1,int s2)
{
	if(s1<s2)
	{
		printf("%d buyuktur %d den",s2,s1);
	}
	else if(s1=s2)
	{
		printf("%d esittir %d ",s1,s2);
	}
	else
	{
		printf("%d buyuktur %d den ",s1,s2);
	}

}
void main()
{
	int s,s3;
	int d;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&s);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&s3);
	
     buyuk(s,s3);
}
