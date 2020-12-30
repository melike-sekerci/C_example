#include <stdio.h>
#include <stdlib.h>


int main() {
/*	int sayilar[]={100,200,300,400,500,600,700};
	printf("%d ",sayilar[5]);
	*/
	
	
/*	int sayilar[]={100,200,300,400,500,600};
	int x;
	x=sayilar[0];
	printf("%d",x);
	
	
/*	char sehir[6]={'a','n','k','a','r','a'};
	printf("%s",sehir);
	
/*	int sayi[4];
	sayi[0]=25;
	sayi[1]=34;
	sayi[2]=42;
	sayi[3]=28;
     printf("%d",sayi[0]);
	*/
	
 /*int sayi[]={10,20,30,40,50,60,70};


	int x;
	
	for(x=0;x<7;x++)
	{
		printf("%d \n",sayi[x]);
	}*/
	
/*	int sayilar[]={10,15,20,35};
    int i,top=0;
    for(i=0;i<4;i++)
    {
    	top=top+sayilar[i];
	}
    printf("%d",top);*/
	
/*	int  sayilar[]={1,2,3,4,5};
	int i,faktoryel=1;
	for(i=0;i<5;i++)
	{
		faktoryel=faktoryel*sayilar[i];
	}
	printf ("sonuc: %d",faktoryel); */
	
	
	
 /*	char sehir[15];
	int i;
	for(i=0;i<2;i++)
	{
		printf("sehir giriniz: ");
		scanf("%s",sehir);
		printf("girdiginiz il: %s \n",sehir);
		
    }*/
	
	
/*	char sehir[3][15];
	int i;
	for(i=0;i<3;i++)
	{
		printf(" %d.sehri giriniz: \n",i+1);
		scanf("%s",&sehir[i]);
		
	}
	
	for(i=0;i<3;i++)
    {

     printf("%d.girdiðiniz il: %s \n",i+1,sehir[i]);

	}	*/
	
	int dizi[100];
	int i,sayi,top=0,ort;
	printf ("eleman sayisi giriniz:",i++);
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("dizinin %d.elemanini giriniz:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	
	for(i=0;i<sayi;i++)
	{
		top=top+dizi[i];
		ort=top/sayi;
	}
	
	printf("toplami: %d ",top);
	printf("ortalama: %d",ort);
	
	
	
	
	
	
	
	return 0; 
}
