#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\Ya�murPC\\Desktop\\Yeni.txt","w");
	
	fputs("melike",dosya);
	putc('\n',dosya);
	fputs("sekerci",dosya);
	putc('\n',dosya);
	fputs("20",dosya);
	putc('\n',dosya);
	fputs("selcuk �niversitesi",dosya);
	
	
	
	
	return 0;
}
