#include <stdio.h>
#include <stdlib.h>

    int asalmi(int sayi){
	
	int i;
	for(i=2;1<sayi;sayi++){
		
	if(sayi % i==0){
		return 0;
	}


	}
	
	return 1;
	
	
}

int main() {
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
if (asalmi(sayi)==0){
	printf("bu sayi asal degil");
}
	
	
	else{
			printf("bu sayi asaldir");
	}

	
	
	
	return 0;
}
