#include <stdio.h>
#include <stdlib.h>



int main() {
	printf("********ortalma hiz hesabi********* \n \n");
	
	float hiz1,hiz2,hiz3,saat1,saat2,saat3,ortalamahiz;
	
	printf("gidilen 1.hizi giriniz :");
	scanf("%f",&hiz1);
	
	printf("1. hizin kac saat gidildigini giriniz:");
	scanf("%f",&saat1);
	
	
	printf("gidilen 2.hizi giriniz:");
	scanf("%f",&hiz2);
	
	printf("2.hizin kac saat  gidildigini giriniz:");
	scanf("%f",&saat2);
	
	printf("gidilen 3.hizi giriniz:");
	scanf("%f",&hiz3);
	
	printf("3.hizda kac saat gidildigini giriniz:");
	scanf("%f",&saat3);
	
	ortalamahiz=(hiz1*saat1+hiz2*saat2+hiz3*saat3)/3;
	
	printf("ortalma hiziniz: %f",ortalamahiz);
	

	
	
	return 0;
}
