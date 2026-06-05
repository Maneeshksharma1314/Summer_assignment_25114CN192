// To check whether a palindrome number or not
#include <stdio.h>

int main() {
    int num, rev = 0, temp, rem;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (rev == temp) {
        printf("Number is palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
