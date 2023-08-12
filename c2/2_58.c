#include "byte_pointer.h"

short is_little_endian(void) {
    int x = 1;
    if (*(byte_pointer)&x == 1)
        return 1;
    else
        return 0;
}

int main() {
    short x;
    x = is_little_endian();
    printf("This is a little endian computer? %d\n", x);
    return 0;
}
