#include <stdio.h>

int main(){
	int x = ~((~0)>>1);
	printf("--- This is SHR?\n--- %d\n",!x);
	return 0;
}
