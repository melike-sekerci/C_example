#include <stdio.h>
#include <stdlib.h>

void arasi(int k,int l)
{
	
   while(k<=l)
  { 
    printf("%d \n",k);
    k++;
  }
	}
	void main()
	{
		int x,y;
		printf("x sayisi:");
		scanf("%d",&x);
		printf("y sayisi giriniz:");
        scanf("%d",&y);
		arasi(x,y)	;	
	}
