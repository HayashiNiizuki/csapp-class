#include <stdio.h>

int lower_one_mask(int n){
	int w = sizeof(int) << 3;
	int x = (unsigned)(~0) >> (w-n);
	return x;
}

int main(){
	printf("Input n:");
	int n = 0;
	scanf("%d",&n);
	printf("n = %d --> %#.8x\n", n , lower_one_mask(n) );
	//printf("%#.8x\n",-1);
	return 0;
}
