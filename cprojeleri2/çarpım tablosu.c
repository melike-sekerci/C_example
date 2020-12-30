#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,c,s;
	for(i=1;i<=10;i++)
	{
		for(c=1;c<=10;c++)
		{
			s=i*c;
			printf("i=%d\t c=%d\t s=%d\n",i,c,s);
			printf("\n");
		}
	}
	return 0;
}
