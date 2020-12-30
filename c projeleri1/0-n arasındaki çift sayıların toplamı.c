#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int s,n,top=0;
	printf("n:");
	scanf("%d",&n);
	for(s=0;s<=n;s=s+2)
	{
		top=top+s;
	}
	printf("%d",top);
	return 0;
}
