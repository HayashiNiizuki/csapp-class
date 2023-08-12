//2.61 0f CSAPP:PASS
#include <stdio.h>

short A(int x){ return !(~x); }
short B(int x){ return !x; }
short C(int x){ return !~(~(x&0xf)^0xf); }
short D(int x){ return !~(~(~x&0xf)^0xf); }

int main(){
	printf("Choose A/B/C/D:");
	char judge;
	scanf("%c",&judge);
	printf("Input x:");
	int x = 0 ;
	scanf("%x",&x);
	switch(judge){
	case 'A' :
		printf("Return is %1d\n",A(x));
		break;
	case 'B' :
		printf("Return is %1d\n",B(x));
		break;
	case 'C' :
		printf("Return is %1d\n",C(x));
		break;
	case 'D' :
		printf("Return is %1d\n",D(x));
		break;
	default :
		printf("Invalid Input!!!\n");
	}
	return 0;
}
