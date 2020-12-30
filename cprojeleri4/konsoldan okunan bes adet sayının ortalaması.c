#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float s,ort,x,top;
	top=0;
	for(s=1;s<=5;s++)
	{
		printf("sayý giriniz:");
	scanf("%f",&x);
	top=top+x;
	}
	ort=top/5;
	printf("%f",ort);
	return 0;
}
