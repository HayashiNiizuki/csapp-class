#include <stdio.h>

#include "byte_pointer.h"

int main() {
    short x = 12345;
    short mx = -x;

    show_bytes((byte_pointer)&x, sizeof(short));
    show_bytes((byte_pointer)&mx, sizeof(short));
    return 0;
}