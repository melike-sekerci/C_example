#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverse(char *s);

void reverse(char *s)
{
	
	 int t;
	 for(t=strlen(s)-1;t>=0;t--) putchar(s[t]);
}


int main(int argc, char *argv[]) {
	reverse("melike");
	return 0;
}

