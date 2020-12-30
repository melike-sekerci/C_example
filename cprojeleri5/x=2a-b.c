#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x,a,b;
	for(b=1;b<=10;b++)
	{
		for(a=1;a<=10;a++)
		{
			x=2*a-b;
			printf("b=%f\t a=%f\t x=%f\n",b,a,x);
		}
	}
	return 0;
	
}
