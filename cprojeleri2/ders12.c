#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
/*	int a,b,c,i;
	a=1;
	b=1;
    	printf("fibonacci: %d \n",a);
		printf("fibonacci: %d \n",b);
	for(i=1;i<=10;i++)
	{
		c=a+b;
		a=b;
		b=c;
		
			printf("fibonacci: %d \n",c);
	} */
	
	
	int i,toplam;
	toplam=0;
	
	for(i=1;i<=41;i+=4)
	{
		
 toplam=toplam+i;
 
		
	}
	
 printf("toplam: %d \n",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
