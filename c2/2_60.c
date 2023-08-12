#include "byte_pointer.h"

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    byte_pointer p = (byte_pointer)&x;
    p[i] = b;
    return x;
}

int main() {
    unsigned int x = 0x12345678;
    unsigned int y = replace_byte(x, 2, 0xAB);
    show_int(y);
    y = replace_byte(x, 0, 0xAB);
    show_int(y);
    return 0;
}
