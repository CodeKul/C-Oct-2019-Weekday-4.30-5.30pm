#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers one by one:\n");
    printf("Enter first no: ");
    scanf("%d", &a);
    printf("Enter second no: ");
    scanf("%d", &b);
    printf("Enter third no: ");
    scanf("%d", &c);
    if (a > b) {
        if (a > c) {
            printf("%d is Max", a);
        }
        else {
            printf("%d is Max", c);
        }
    }
    else {
        if (b > c) {
            printf("%d is Max", b);
        }
        else {
            printf("%d is Max", c);
        }
    }
    return 0;
}