#include <stdio.h>
#include <stdlib.h>


int main() {
    
/*	int dizi[2][2];
     
     dizi[0][0]=10;
     dizi[0][1]=20;
     dizi[1][0]=30;
	 dizi[1][1]=40;
	 
	printf("%d ",dizi[0][0]);	
	printf("%d \n",dizi[0][1]);
	printf("%d ",dizi[1][0]);
	printf("%d",dizi[1][1]); */
	
/*	int matris[2][3]={10,20,30,40,50,60};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	*/
	
/*	int satir,sutun; // klavyeden girilen degerleri ekrana yazdirma
	printf("satir sayisini giriniz:");
	scanf("%d",&satir);
	
	printf("sütün sayisini giriniz:");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	int i,j,k,l;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("[%d][%d]-->",i,j);
			scanf("%d",&matris[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("%d ",matris[k][l]);
		}
		printf("\n");
	}*/
	
	
	
/*	int m1[2][2]={10,12,15,18};
	int m2[2][2]={8,11,14,6};
	int toplam,i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplam=m1[i][j]+m2[i][j];
			printf("%d ",toplam);
		}
		printf("\n");
	} */
	
	int satir,sutun;
	
    printf("Satir sayisini giriniz:");
    scanf("%d",&satir);
    
    printf("Sutun sayisini giriniz:"),
    scanf("%d",&sutun);
    

    
    
    int dizi1[satir][sutun]; //1.matris
    
    int i,j;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n [%d][%d]=>",i,j);
			scanf("%d",&dizi1[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	 
	
    int dizi2[satir][sutun]; //2.matris
    
    int k,l;
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("\n [%d][%d]=>",k,l);
			scanf("%d",&dizi2[k][l]);
			printf("\n");
		}
		printf("\n");
		
	}
	
	int m,n,toplam;
	for(m=0;m<satir;m++)
	{
		for(n=0;n<sutun;n++)
		{
			toplam=dizi1[satir][sutun]+dizi2[satir][sutun];
			printf("%d",toplam);
			
		}
		printf("\n");
	}
	
	
	
	
	return 0; 
}
