#include <stdio.h>
#include <stdlib.h>

int topla(int s1,int s2){
	
	int top=0;
	top=s1+s2;
	return top;
}
int main()
{
	int x,y;
	printf("x:");
	scanf("%d",&x);
	printf("y:");
	scanf("%d",&y);
	printf("%d",topla(x,y));
}
