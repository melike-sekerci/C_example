#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
  float peynirmiktari,sut;
  
	printf("Peynirinizin kilogramini giriniz:");
	scanf("%f",&peynirmiktari);
	
     sut=peynirmiktari*7.5;
	
    printf("Elde dilen peynir icin: %f L sut uretilmelidir. ",sut);
	
	
	return 0;
}
