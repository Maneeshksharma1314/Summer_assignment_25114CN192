// Program to find sum of digits using recursion
#include <stdio.h>

int digit_sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + digit_sum(n / 10);
    }
}

int main() {
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    printf("The sum of the digits: %d\n", digit_sum(num));

    return 0;
}
