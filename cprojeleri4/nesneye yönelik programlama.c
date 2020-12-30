#include<stdio.h>
int main(){
	int x;
	printf("bir sayi giriniz:");
	scanf("%d",&x);
	for(int i=31; i>=0; i--){
	if(x>>i & 1==1){
		putchar('1');
	}
	else{
		putchar('0');
	}
	}
}
