#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double  x,a,b;
	for(b=1;b<=5;b++)
	{
		for(a=1;a<=5;a++)
		{
			x=-b/a;
		printf("b=%f\t a=%f\t x=%f \n",b,a,x);
		}
	}
	return 0;
}
