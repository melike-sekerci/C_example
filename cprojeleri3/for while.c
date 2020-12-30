#include <stdio.h>
#include <stdlib.h>


int main() {
/*	int s,n,top;
	top=0;
	printf("n:");
	scanf("%d",&n);
	for(s=1;s<=n;s++)
	{
		top=top+s;
	}
  printf("%d",top);
	*/
	int s,n,top;
	top=0;
	s=0;
	printf("n:");
	scanf("%d",&n);
	while(s<=n)
	{
		top=top+s;
		s++;
	}
	printf("%d",top);
	return 0;
}
