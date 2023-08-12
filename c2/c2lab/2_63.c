#include <stdio.h>

unsigned srl(unsigned x, int k){
	/*Peform shift arithmetically*/
	unsigned xsra = (int) x >> k;
	int w = 8 * sizeof(int);
	unsigned sz = ~(~0 << (w - k));
	return sz & xsra;
}

int sra(int x, int k){
	/*Perform shift logically*/
	int xsrl = srl((unsigned)x, k);
	int w = 8 * sizeof(int);
	int test = 1 << (w-k-1);
	test &= xsrl;
	int mask = ~(test - 1);
	return xsrl | mask;
}

int main(){
	printf("Choose [A] srl() or [B] sra():");
	char s = '0';
	scanf("%c", &s);
	if( s =='A' ){
		printf("Input x and k:");
		unsigned x;
		int k;
		scanf("%x %d", &x , &k);
		printf("result of srl is %#.8x\n", srl( x, k ));
	}
	else if( s == 'B' ){
		printf("Input x and k:");
		int x;
                int k;
                scanf("%x %d", &x , &k);
                printf("result of sra is %#.8x\n", sra( x, k ));
	}
	else printf("Invalid Input!!!\n");
	return 0;
}
