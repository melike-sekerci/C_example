#include <stdio.h>
#include <stdlib.h>


int main() {
	
/*	int sayi;
	
	   printf("Bir Sayi Giriniz:");
	   scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1 : printf("Ocak"); break;
		case 2 : printf("Subat"); break;
		case 3 : printf("Mart"); break;
		case 4 : printf("Nisan"); break;
		case 5 : printf("Mayis"); break;
		case 6 : printf("Haziran"); break;
		case 7 : printf("Temmuz"); break;
		case 8 : printf("Agustos"); break;
		case 9 : printf("Eylul"); break;
		case 10 : printf("Ekim"); break;
		case 11 : printf("Kasim"); break;
		case 12 : printf("Aralik"); break;
		
		default: printf("Hatali Giris Yaptiniz"); 
		
		
	}
	*/
	
/*	int ders;
		
		printf("Bir Ders Giriniz:");
		scanf("%s",&ders);
		
	switch(ders)	
		{
			case 'T':printf("Turkce"); 
			break;
			
			case 'M':printf("Matematik");
			break;
			
			case 'S':printf("Sosyal Bilgiler");
			break;
			
			case 'F':printf("Fen Bilgisi");
			break;
			
			default: printf("hatali ya da kucuk harfle  giris yaptiniz.");
		}
		*/
	/*	int gunler;
		
		printf("Bir Sayi Giriniz:");
		scanf("%d",&gunler);
		
		switch(gunler)
		{
			case 1:printf("Pazartesi");
			break;
			case 2:printf("Sali");
			break;
			case 3:printf("Carsamba");
			break;
			case 4:printf("Persembe");
			break;
			case 5:printf("Cuma");
			break;
			case 6:printf("Cumartesi");
			break;
			case 7:printf("Pazar");
			break;
			default:printf("Hatali  giris yaptiniz");
		} */
		
		
	/*	float sayi1,sayi2,sonuc;
		char islem;
		
		sayi1=75;
		sayi2=15;
		
		printf("islemi girin:");
		scanf("%s",&islem);
		
		switch(islem)
		{
			
			case '+':
			sonuc=sayi1+sayi2;
			 printf("sonuc: %f",sonuc);
			break;
			
			
			case '-':
			sonuc=sayi1-sayi2;
			printf("sonuc: %f",sonuc);
			break;
			
			
			case '*':
			sonuc=sayi1*sayi2;
			 printf("sonuc: %f",sonuc);
			break;
			
			
			case '/': 
			sonuc=sayi1/sayi2;
			printf("sonuc: %f",sonuc);
			break;
			
			default : printf("hatali giris yaptiniz");
		}
		
		*/
		int sonuc,alan,cevre,sayi1,r,pi,x,kenar1,kenar2;
		char islem;
		    printf("matematik menusu \n \n");
		    printf("*********************** \n \n \n");
		
		
		    printf("1-karede alan ve cevre hesabi \n");
		    printf("2-kup hesabi \n");
		    printf("3- cemberde alan ve cevre hesabi \n");
		    printf("4- 5*2+7x+9 x e gore islemin sonucu \n");
		    printf("isleminizi seciniz:");
		    scanf("%d",&islem);
		    
		switch(islem)
		{
			
			
		case 1: 
			printf("karenin bir kenarini giriniz:  ");
			scanf("%d",&sayi1);
			alan=sayi1*sayi1;
			cevre=sayi1*4;
			printf("karenin alani:  %d \n",alan);
			printf("karenin cevresi %d \n",cevre);
		break;
			
			
		case 2:
				printf("kupunu istediginiz sayiyi giriniz:");
				scanf("%d",&sayi1);
				
				printf("sonucunuz: %d",(sayi1*sayi1*sayi1));
		break;
		
		case 3: 
		       printf("cemberin yaricapini giriniz:");
		       scanf("%d",&r);
		       pi=3;
		       printf("cemberin cevresi: %d \n",(2*pi*r));
		       printf("cemberin alani: %d \n",(pi*r*r));
	    break;
			
		case 4:
			printf("x degerini giriniz:");
			scanf("%d",&x);
			printf("sonucunuz: %d",((5*x*2)+(7*x)+9));
		break;
		
		case 5:
			printf("dikdörtgenin kisa bir kenarini giriniz:");
			scanf("%d",&kenar1);
			printf("dikdörtgenin uzun kenarini giriniz:");
			scanf("%d",&kenar2);
			printf("dikdortgenin alani: %d \n",(kenar1*kenar2));
			printf("dikdortgenin cevresi :%d",(2*(kenar1+kenar2)));
		break;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	return 0;
}
