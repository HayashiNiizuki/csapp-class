#include <stdio.h>

unsigned rotate_left(unsigned x , int n){
	int w = sizeof(int)<<3;
	return ( x << n ) | ( x >> ( w -n ));
}

int main(){
	printf("Input x and n:");
	unsigned x; int n;
	scanf("%x %d", &x , &n);
	printf("%x rotate %d is %x\n", x , n , rotate_left( x , n ));
	return 0;
}
