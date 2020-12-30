#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int x,y,top;
	top=0;
	printf("x:");
	scanf("%d",&x);
	
	printf("y:");
	scanf("%d",&y);
	
	for(;x<=y;x++)
	top=top+x;
	printf("%d",top);
	

	
	return 0;
}
