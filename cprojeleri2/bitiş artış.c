#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b,a,s;
	printf("baslangic degerini giriniz:");
	scanf("%d",&b);
	
	printf("artis degerini giriniz:");
	scanf("%d",&a);
	
	printf("bitis degerini giriniz :");
	scanf("%d",&s);
	for(;b<=s;b=b+a)
	{
		printf("%d\n",b);
	}
	return 0;
}
