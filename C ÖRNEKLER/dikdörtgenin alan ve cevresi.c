#include <stdio.h>
#include <stdlib.h>


int main() {
	float d1,d2,cevre,alan;
	printf("kisa kenari giriniz:");
	scanf("%f",&d1);
	
	printf("uzun kenari giriniz:");
	scanf("%f",&d2);
	
    cevre=(d1+d2)*2;
    alan=d1*d2;
    printf("dikdörtgenin cevresi:%f \n",cevre);    
    printf("dikdörtgenin alani:%f",alan);    

	return 0;
}
