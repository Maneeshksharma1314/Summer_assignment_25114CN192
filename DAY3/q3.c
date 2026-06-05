// Program to find GCD of two numbers
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the number n1: ");
    scanf("%d", &n1);

    printf("Enter the number n2: ");
    scanf("%d", &n2);

    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    printf("The GCD is: %d\n", n1);

    return 0;
}
