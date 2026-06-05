// To check whether a number is prime or not
#include <stdio.h>

int main() {
    int n, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a prime");
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Number is prime");
    } else {
        printf("Not a prime");
    }

    return 0;
}
