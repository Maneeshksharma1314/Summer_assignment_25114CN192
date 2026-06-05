// To print prime numbers in a range
#include <stdio.h>

int main() {
    int flag, n;

    printf("Enter the number (up to which prime numbers to print): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        flag = 0;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
