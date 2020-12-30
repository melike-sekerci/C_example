#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s,top=0;
	for(s=1;s<=10;s++)
	{
	if(s==5)
	continue;
	top=top+s;
	
	}
	printf("%d",top);
	return 0;
}
