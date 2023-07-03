#include <stdio.h>
#include <math.h>

int main() {
    char choice = 'Y';
    int number, tempNum;
    int quotient, remainder;
    int digitNum;
    while (choice == 'y' || choice == 'Y') {
        digitNum = 0;
        printf("Enter a non-zero number to check whether narcissistic or not: ");
        scanf("%d", &number);
        tempNum = number; 
        while (tempNum != 0) {
            tempNum = tempNum / 10;
            digitNum++;
        }
        tempNum = number;
        int sum = 0;
        while (tempNum != 0) {
            remainder = tempNum % 10;
            sum += pow(remainder, digitNum);
            tempNum = tempNum / 10;
        }
        if (sum == number) {
            printf("The number %d is a narcissistic number!", number);
        } else {
            printf("The number %d is not a narcissistic number.", number);
        }
        printf("\nContinue? (y/n): ");
        scanf(" %c", &choice);
    }
    return 0;
}
