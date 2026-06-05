// To find the product of the digits
#include <stdio.h>

int main() {
    int num, p = 1, rem;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        p *= rem;
        num /= 10;
    }

    printf("The product of the digits is: %d\n", p);

    return 0;
}
