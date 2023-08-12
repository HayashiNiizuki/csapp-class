#include <stdio.h>

int any_odd_one(unsigned x){
	return !!(x&0x55555555);
}

int main(){
	unsigned x = 0;
	printf("Input x:");
	scanf( "%x", &x );
	printf("Return of any_odd_one() is %d\n", any_odd_one(x));
	return 0;
}
