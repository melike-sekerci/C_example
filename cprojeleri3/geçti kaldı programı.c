#include <stdio.h>
#include <stdlib.h>


int main() {
	int n1,n2,ort;
	
	printf("notu giriniz:");
	scanf("%d",&n1);
	if(0<=n1 & n1<=100)
     printf("\n");
	else
	printf("tekrar deneyiniz.");
	
	
	printf("notu giriniz:");
	scanf("%d",&n2);
	if(0<=n2 & n2<=100) 
    printf("\n");	
	else
	printf("tekrar deneyiniz."); // en baþa dönmesi gerek ama iþleme devam ediyor.
	 
	ort=(n1+n2)/2;
	if(ort>=50)
	printf("ortalamaniz:%d TEBRÝKLER",ort);
	else
	printf("ortalamaniz:%d Daha cok calimalisiniz.",ort);
	
	
	return 0;
}
