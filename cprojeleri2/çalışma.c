 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(void) {
	
	char *s;
	register int t;
	
	s=malloc(80);
	
	if(!s){
		printf("memory request failed.\n");
		
		exit(1);
	}
	
	gets(s);
	for(t=strlen(s)-1;t>=0;t--) putchar(s[t]);
	free(s);
	*/
	
	
	int main (void)
	{
	struct{
	int a;
	int b;
	
	}x,y;
	x.a=10;
	y=x;
	printf("%d",y.a);
	
	return 0;
}
