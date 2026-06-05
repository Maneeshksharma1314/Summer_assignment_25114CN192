// Program to find the largest prime factor
#include <stdio.h>

int main() {
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    long long largest = -1;

    while (num % 2 == 0) {
        largest = 2;
        num /= 2;
    }

    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest = i;
            num /= i;
        }
    }

    if (num > 2) {
        largest = num;
    }

    printf("Largest prime factor = %lld\n", largest);

    return 0;
}
