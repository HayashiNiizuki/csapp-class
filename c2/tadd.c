#include <stddef.h>
#include <stdio.h>

#include "byte_pointer.h"

int tadd_ok1(short x, short y) {
    short sum = x + y;
    return (sum - x == y) && (sum - y == x);
}

int tadd_ok2(short x, short y) {
    short sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x > 0 && y > 0 && sum <= 0;
    return !neg_over && !pos_over;
}

int main() {
    short x;
    short y;
    scanf("%hd %hd", &x, &y);
    show_bytes((byte_pointer)&x, sizeof(x));
    show_bytes((byte_pointer)&y, sizeof(y));
    printf("%d %d\n", tadd_ok1(x, y), tadd_ok2(x, y));
    return 0;
}