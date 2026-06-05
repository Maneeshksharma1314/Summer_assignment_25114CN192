// To print Armstrong numbers up to a given range
#include <stdio.h>
#include <math.h>

int main() {
    int range;

    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) {
        int n = i;
        int temp = n;
        int count = 0;
        int arm = 0;

        while (n != 0) {
            count++;
            n /= 10;
        }

        while (temp != 0) {
            int digit = temp % 10;
            arm += (int)round(pow(digit, count));
            temp /= 10;
        }

        if (arm == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
