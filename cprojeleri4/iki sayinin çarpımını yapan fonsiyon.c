#include <stdio.h>
#include <stdlib.h>


int carpim(int s1, int s2)
{
	int c;
	c=s1*s2;
	return c;
}
int main()
{
	int k;
	k=carpim(4,9);
	printf("sonuc %d",k);
}
