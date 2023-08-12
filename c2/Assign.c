#include "byte_pointer.h"

int main() {
    char i;
begin:
    printf("[1]int [2]short [3]long [4]float [5]double\n");
    scanf("%c", &i);
    switch (i) {
    case '1': {
        int a = 0;
        scanf("%d", &a);
        show_int(a);
        goto begin;
    }
    case '2': {
        short b = 0;
        scanf("%hd", &b);
        show_short(b);
        goto begin;
    }
    case '3': {
        long c = 0;
        scanf("%ld", &c);
        show_long(c);
        goto begin;
    }
    case '4': {
        float d = 0;
        scanf("%f", &d);
        show_float(d);
        goto begin;
    }
    case '5': {
        double e = 0;
        scanf("%lf", &e);
        show_double(e);
        goto begin;
    }
    default:
        break;
    }
    return 0;
}
