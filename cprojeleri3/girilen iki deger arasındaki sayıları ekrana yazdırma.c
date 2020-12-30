#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int x,y;
	printf("bir x degeri giriniz:");
	scanf("%d",&x);
	
	printf("bir y degeri giriniz:");
	scanf("%d",&y);
	for(;x<=y;x++)
	printf("%d\n",x);
	for(;y<=x;y++)
	printf("%d \n",y);
	
	
	return 0;
}
