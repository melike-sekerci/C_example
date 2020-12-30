#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,s;
	printf("n:");
	scanf("%d",&n);
	for(s=0;s<=n;s=s+2)
	printf("%d \t",s);
	return 0;
}
