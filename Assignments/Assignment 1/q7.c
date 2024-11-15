//Q7. WAP for Binary to Decimal conversion & Decimal to Binary for a given number  as per 
//user’s choice.
#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimalNumber = 0;
    int base = 1; 

    while (binary > 0) {
        int lastDigit = binary % 10; 
        binary /= 10; 
        decimalNumber += lastDigit * base; 
        base *= 2; 
    }

    return decimalNumber;
}

void decimalToBinary(int decimal, int *binary) {
    *binary = 0; 
    int place = 1; 

    while (decimal > 0) {
        int remainder = decimal % 2; 
        decimal /= 2; 
        *binary += remainder * place; 
        place *= 10; 
    }
}

int main() {
    int choice;
    int binary;
    int decimal;
    int binaryOutput;

    while (1) {
        printf("Choose an option:\n");
        printf("1. Convert Binary to Decimal\n");
        printf("2. Convert Decimal to Binary\n");
        printf("3. Exit\n");
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter a binary number: ");
                scanf("%d", &binary);
                int isBinary = 1; 
                int temp = binary;

                while (temp > 0) {
                    if (temp % 10 > 1) {
                        isBinary = 0; 
                        break;
                    }
                    temp /= 10;
                }

                if (isBinary) {
                    int decimalOutput = binaryToDecimal(binary);
                    printf("Binary: %d => Decimal: %d\n", binary, decimalOutput);
                } else {
                    printf("Invalid binary number. Please use only 0s and 1s.\n");
                }
                break;

            case 2: 
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                if (decimal >= 0) {
                    decimalToBinary(decimal, &binaryOutput);
                    printf("Decimal: %d => Binary: %d\n", decimal, binaryOutput);
                } else {
                    printf("Please enter a non-negative decimal number.\n");
                }
                break;

            case 3:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
