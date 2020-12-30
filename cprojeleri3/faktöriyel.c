#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	int s,n,fak;
	
	fak=1;
	printf("n:");
	scanf("%d",&n);
	for(s=1;s<=n;s++)
	fak=fak*s;
	printf("%d",fak); */
	
	int s,n,fak;
	printf("n:");
	scanf("%d",&n);
	fak=1;
	s=1;
	while(s<=n)
	{
	fak=fak*s;
	s++;
	}
	
	printf("%d",fak);
	
	
	
	return 0; 
	
	
}
