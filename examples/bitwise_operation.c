#include <stdio.h>

int main() {
    unsigned long v1 = 0x00001111;
    unsigned long v2 = 0x00001202;
    unsigned long v;

    printf("\n");
    printf("0x%016lx\n", v1);
    printf("0x%016lx\n", ~v2);

    v = v1 & (~v2);
    v = v | v2;
    printf("0x%016lx\n", v);

    return 0;
}
