// To calculate sum of first N numbers
#include <stdio.h>

int main() {
    int num, s = 0;

    printf("Enter N: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        s += i;
    }

    printf("The sum is: %d\n", s);

    return 0;
}
