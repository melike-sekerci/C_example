#include <stdio.h>
#include <stdlib.h>


int main() {
	float v,f,ort;
	printf("vize  notunu giriniz:");
	scanf("%f",&v);
		
	printf("final notunu giriniz:");
	scanf("%f",&f);
	
	ort=v*0.4+f*0.6;
	if(ort>=50)
	printf("ortalamaniz=%2.f gectiniz.",ort);
	else
	printf("ortalamaniz=%2.f kaldiniz",ort);
	
	
	
	
	
	return 0;
}
