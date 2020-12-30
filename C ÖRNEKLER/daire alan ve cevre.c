#include <stdio.h>
#include <stdlib.h>


int main() {
    float r,alan,cevre;
    float pi=3.14;
    printf("dairenin yaricapini giriniz:");
    scanf("%f",&r);
    if(r>0)
    {
    	alan=pi*r*r;
    	cevre=2*pi*r;
    	printf("dairenin alani =%f \n",alan);
    	printf("dairenin cevresi=%f",cevre);	
	}
    
	else
	printf ("hata!!!");
	
	
	
	
	
	
	
	
	
	
	return 0;
}
