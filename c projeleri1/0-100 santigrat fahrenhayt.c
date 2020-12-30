#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double c,f;
	f=0;
	for(c=0;c<=100;c++)
	{
	f=(c*1.8)+32;
	printf("c=%f\t f=%f\n",c,f);
	}
	return 0;
}
