#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	printf("****Ortalama Hesabi**** \n\n\n");
	
	
	char ders1[40];
	char ders2[40];
	char ders3[40];
	char ders4[40];
	char ders5[40];
	char ders6[40];
	char ders7[40];
	char ders8[40];
	
	int v1,f1,v2,f2,v3,f3,v4,f4,v5,f5,v6,f6,v7,f7,v8,f8;
	float ort1,ort2,ort3,ort4,ort5,ort6,ort7,ort8;
	
	printf("Birinci dersi giriniz:");
	gets(ders1);
	printf("Vize notunu giriniz:");
	scanf("%d",&v1);
	printf("Final notunu giriniz:");
	scanf("%d",&f1);
	ort1=(v1*0.4)+(f1*0.6);
	fflush(stdin);
	
	printf("Ýkinci dersi giriniz:");
	gets(ders2);
	printf("Vize notunu giriniz:");
	scanf("%d",&v2);
	printf("Final notunu giriniz:");
	scanf("%d",&f2);
	ort2=(v2*0.4)+(f2*0.6);
	fflush(stdin);
	
	
	printf("Ucuncu dersi giriniz:");
	gets(ders3);
	printf("Vize notunu giriniz:");
	scanf("%d",&v3);
	printf("Final notunu giriniz:");
	scanf("%d",&f3);
	ort3=(v3*0.4)+(f3*0.6);
	fflush(stdin);
	
	
	printf("Dorduncu dersi giriniz:");
	gets(ders4);
	printf("Vize notunu giriniz:");
	scanf("%d",&v4);
	printf("Final notunu giriniz:");
	scanf("%d",&f4);
	ort4=(v4*0.4)+(f4*0.6);
	fflush(stdin);
	
	
	
	printf("Besinci dersi giriniz:");
	gets(ders5);
	printf("Vize notunu giriniz:");
	scanf("%d",&v5);
	printf("Final notunu giriniz:");
	scanf("%d",&f5);
	ort5=(v5*0.4)+(f5*0.6);
	fflush(stdin);
	
	
	
	printf("Altinci dersi giriniz:");
	gets(ders6);
	printf("Vize notunu giriniz:");
	scanf("%d",&v6);
	printf("Final notunu giriniz:");
	scanf("%d",&f6);
	ort6=(v6*0.4)+(f6*0.6);
	fflush(stdin);
	
	
	printf("Yedinci dersi giriniz:");
	gets(ders7);
	printf("Vize notunu giriniz:");
	scanf("%d",&v7);
	printf("Final notunu giriniz:");
	scanf("%d",&f7);
	ort7=(v7*0.4)+(f7*0.6);
	fflush(stdin);
	
	
	printf("Sekizinci dersi giriniz:");
	gets(ders8);
	printf("Vize notunu giriniz:");
	scanf("%d",&v8);
	printf("Final notunu giriniz:");
	scanf("%d",&f8);
	ort8=(v8*0.4)+(f8*0.6);
	fflush(stdin);
	
	
	printf("%s Dersi Gecme Notu:%.2f\n",ders1,ort1);
	printf("%s Dersi Gecme Notu:%.2f\n",ders2,ort2);
	printf("%s Dersi Gecme Notu:%.2f\n",ders3,ort3);
	printf("%s Dersi Gecme Notu:%.2f\n",ders4,ort4);
	printf("%s Dersi Gecme Notu:%.2f\n",ders5,ort5);
	printf("%s Dersi Gecme Notu:%.2f\n",ders6,ort6);
	printf("%s Dersi Gecme Notu:%.2f\n",ders7,ort7);
	printf("%s Dersi Gecme Notu:%.2f\n",ders8,ort8);
	
	getch();
	
	
	
	
	
	
	
	
	return 0;
}
