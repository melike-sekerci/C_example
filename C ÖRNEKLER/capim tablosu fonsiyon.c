#include <stdio.h>
#include <stdlib.h>

int carpim()
{
	int i,j,carpim=1;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			carpim=i*j;
			printf("i=%d\t j=%d\t sonuc=%d\n",i,j,carpim);
		}
	}
	return carpim;
}
int main()
{
	
	carpim();
}
