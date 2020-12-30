#include <stdio.h>
#include <stdlib.h>
#define puan1 2.19
#define puan2 3.45
#define puan3 1.54
#define puan4 1.49

int main() {
	
	int turkce,matematik,fen,sosyal;
	printf("turke netinizi giriniz: \n");
	scanf("%d",&turkce);
	
	printf("matematik netinizi giriniz: \n");
	scanf("%d",&matematik);
	
	printf("fen netinizi giriniz: \n");
	scanf("%d",&fen);
	
	printf("sosyal netinizi giriniz: \n");
	scanf("%d",&sosyal);
	
	float netpuan;
	netpuan=turkce*puan1+matematik*puan2+fen*puan3+sosyal*puan4+100;
	printf("net puaninin =%.2f",netpuan);
	
	return 0;
}
