// Program to check Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int count = 0, num, temp, temp2, a = 0, r;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        count++;
        num /= 10;
    }

    temp2 = temp;

    while (temp != 0) {
        r = temp % 10;
        a += (int)round(pow(r, count));
        temp /= 10;
    }

    if (a == temp2) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
