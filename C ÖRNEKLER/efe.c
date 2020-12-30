#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int bosluk,i;
	char isim[20];
	printf("Klavyeden bir isim giriniz:");
	scanf("%s",isim);
	bosluk=strlen(isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
		printf("   ");
	}
	printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
	}
	printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
		printf("   ");
	}
	
	printf("\n"); //satir boslugu
	
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");	
	}
	printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
	    printf("   ");
	    printf("   ");  
	}
	printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");		
	}	    
	 printf("\n"); // satirboslugu
	printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
		printf("   ");
		printf("   ");
		printf("   ");
		printf("   ");
	}   
	printf("%s",isim);
	 printf("\n"); // satirboslugu
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");	    
	}
	  printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
		printf("   ");
		printf("   ");      
    }
	 printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");	    
	}   
	 printf("\n"); // satirboslugu
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
	    printf("   ");
	}
	 printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
     printf("   ");    
	}    
	  printf("%s",isim);
	for(i=1;i<=bosluk;i++);
	{
		printf("   ");
	    printf("   ");
	}  
	    
	  getch();  
	    
	    
	    
	    
	return 0;
}
