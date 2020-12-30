#include <stdio.h>
#include <stdlib.h>


int main() {
	
int x,y;
	
	printf("bir x degeri giriniz:");
	scanf("%d",&x);
	
	printf("bir y degeri giriniz:");
	scanf("%d",&y);
	
	x+=y;
	printf("bulunan x+=y degeri: %d \n",x+=y);
	
	x-=y;
	printf("bulunan x-=y degeri: %d \n",x-y);
	
	x*=y;
	printf("bulunan x*y degeri: %d \n",x*y);
		
	x+=-y;
	printf("bulunan x+=-y degeri: %d \n",x+=-y);
		
	x-=-y;
	printf("bulunan x-=-y degeri: %d \n",x-=-y);
	
	x*=-y;
	printf("bulunan x*=-y degeri: %d",x*=-y);
	
	
	
	
	
	return 0;
}
