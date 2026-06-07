// Program to reverse a number using recursion
#include <stdio.h>

int rev = 0;

int rev_num(int n) {
    if (n == 0) {
        return rev;
    }

    rev = rev * 10 + (n % 10);
    return rev_num(n / 10);
}

int main() {
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    printf("The Reverse: %d\n", rev_num(num));

    return 0;
}
