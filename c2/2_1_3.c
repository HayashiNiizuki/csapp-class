#include <stdio.h>
#include <stddef.h>

#include "byte_pointer.h"

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float)val;
    int *pval = &val;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}
int main() {
    test_show_bytes((float)1.1);
    return 0;
}