#include <stdio.h>
#include <stdlib.h>


void toplam(int k) {
	int i,top=0;
	for(i=1;i<=k;i++){
		top=top+i;
		
	}
	printf("toplam:  %d ",top);
}
void main()
{
	int d;
	printf("bir sayi giriniz:");
	scanf("%d",&d);
	toplam(d); 
}
