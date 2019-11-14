// Write a program to get input from the user as a number and check whether it is od or even
#include<stdio.h>

int main() {

    int no = 0;
    printf("Enter a no: ");
    scanf("%d", &no);

    if (no % 2 == 0) {
        printf("%d is even\n", no);
    }
    else {
        printf("%d is odd\n", no);
    }

    return 0;
}

