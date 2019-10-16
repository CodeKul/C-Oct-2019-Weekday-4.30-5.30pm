#include<stdio.h>

int main() {

    int a;
    a = 10;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Size of a: %lu\n", sizeof(a));

    float b = 23.45;
    printf("Value of b: %.2f\n", b);
    printf("Address of b: %p\n", &b);
    printf("Size of b: %lu\n", sizeof(b));

    char c = 'A';
    printf("Value of c: %c\n", c);
    printf("Address of c: %p\n", &c);
    printf("Size of c: %lu\n", sizeof(c));

/*
    1 bit
    1 byte = 8 bits
    1 kb = 1024 bytes
    1 mb = 1024 kb
    1 gb = 1024 mb
    1 tb = 1024 gb
    1 pb = 1024 tb
*/

    return 0;
}