// Program to convert decimal to binary
#include <stdio.h>

int main() {
    int decimalNum;

    printf("Enter the Decimal number: ");
    scanf("%d", &decimalNum);

    if (decimalNum == 0) {
        printf("Binary Transformation: 0\n");
        return 0;
    }

    int binary[32];
    int i = 0;

    while (decimalNum != 0) {
        binary[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }

    printf("The Binary Transformation: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
