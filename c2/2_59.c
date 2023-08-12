#include "byte_pointer.h"

int main() {
    short i = 0;
    int x, y, z;
    printf("Iuput x and y, I will combine it together:");
    scanf("%d %d", &x, &y);
    byte_pointer p = (byte_pointer)&x;
    byte_pointer q = (byte_pointer)&y;
    byte_pointer r = (byte_pointer)&z;
    while (p[i] != 0) {
        r[i] = p[i];
        i++;
    };
    do {
        r[i] = q[i];
        i++;
    } while (i < 5);
    printf("x:");
    show_int(x);
    printf("y:");
    show_int(y);
    printf("z:");
    show_int(z);
    return 0;
}
