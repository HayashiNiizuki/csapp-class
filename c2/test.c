#include <stddef.h>
#include <stdio.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	    size_t i;
	        for (i = 0; i < len; i++)
			        printf("%.2x", start[i]);
		    printf("\t");
}

void show_int(int x) { show_bytes((byte_pointer)&x, sizeof(int)); }

// int main(){
// 	for(auto i = 0; i != 1001; i++){
// 		show_int(i);
// 		if( i%10 == 0 )
// 			printf("\n");
// 	}
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	unsigned int MAX = 1 << 31;
	show_int(MAX);
	MAX >>= 31;
	show_int(MAX);
	return 0;
}
