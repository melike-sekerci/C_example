#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,toplam=0;
	for(i=0;i<=10;i=i+2)
	{
		toplam=toplam+i;
	}
	printf("%d",toplam);
	return 0;
}
