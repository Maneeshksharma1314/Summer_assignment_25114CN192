// Program to find nth Fibonacci term
#include <stdio.h>

int main() {
    int n;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    int a = 0, b = 1;

    if (n == 1)
        printf("%d", a);
    else if (n == 2)
        printf("%d", b);
    else {
        for (int i = 3; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }

    return 0;
}
