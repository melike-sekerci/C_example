#include <stdio.h>
#include <stdlib.h>
 static int pascal(int k){

if(k<1)
 return 1;
 else
 {
 return(k*(k-1)/2);
 }
}


int main() {
	int n;
	printf("bir deðer giriniz:");
	scanf("%d",&n);
	printf("\n%d deðerinin pscal hesabi : %d",n,pascal(n));
	getchar();
	getchar();
	
	
	return 0;
}
