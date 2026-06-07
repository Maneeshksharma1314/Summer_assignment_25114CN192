// Program to find x^n without using pow()
#include <stdio.h>

int main() {
    int a, b, r = 1;

    printf("Enter the Number: ");
    scanf("%d", &a);

    printf("Enter the power: ");
    scanf("%d", &b);

    while (b != 0) {
        r *= a;
        b -= 1;
    }

    printf("Result: %d\n", r);

    return 0;
}
