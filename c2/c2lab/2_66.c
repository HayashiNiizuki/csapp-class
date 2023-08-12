#include <stdio.h>

int main(){
	printf("Input x:");
	unsigned x = 0x0;
	scanf("%x",&x);
	x^=x>>16;
	x^=x>>8;
	x^=x>>4;
	x^=x>>2;
	x^=x>>1;
	x&=0x1;
	printf("Return is %d\n",x);
	return 1;
}
