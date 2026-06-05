// Program to find LCM of two numbers
#include <stdio.h>

int main() {
    int n1, n2, lcm;

    printf("Enter the number n1: ");
    scanf("%d", &n1);

    printf("Enter the number n2: ");
    scanf("%d", &n2);

    int a = n1;
    int b = n2;

    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    lcm = (a / n1) * b;

    printf("The LCM is: %d\n", lcm);

    return 0;
}
