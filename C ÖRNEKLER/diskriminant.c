#include <stdio.h>
#include <stdlib.h>


int main() {
	printf("ikinci dereceden kok bulma: a*x*x+b*x+c koklerini bulalim \n \n \n");
	float a,b,c,x1,x2,d;
	
	printf("a:");
    scanf("%f",&a);
    
    printf("b:");
    scanf("%f",&b);
    
    printf("c:");
    scanf("%f",&c);
    
    d=b*b-4*a*c;
    
    x1=(-b-sqrt(d))/2*a;
    x2=(-b+sqrt(d))/2*a;
    printf("x1:%f x2:%f",x1,x2);
	
	
	
	
	return 0;
}
