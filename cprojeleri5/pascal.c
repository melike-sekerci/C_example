#include <stdio.h>
int pascal(int,int);
int main(void)
{
	int a=0;
	int b=0;
	int c=0;
	printf("Pascal ucgeni kaç adimli istersiniz:");
	scanf("%d",&a);
	printf("1\n");
	for(c=1;c>=a+1;c++){
		printf("1");
		for(b=1;c>=b;b++){
			int d=pascal(c,b);
			printf("%d",d);
		}
		printf("\n");
		
	}
	return 0;
	
}
int pascal(int f,int k){
	if(k<0 || f<0 || k>f)
	return 0;
	if(f==1)
	return 1;
	else 
	return pascal(f-1,k)+pascal(f-1,k-1);
}
