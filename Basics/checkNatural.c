#include <stdio.h>
#include <math.h>

int main() {
    char choice = 'Y';
    float number;
    
    while (choice == 'y' || choice == 'Y') {
        printf("Enter a number to check whether natural or not: ");
        scanf("%f", &number);
        
        if (number >= 1 && floor(number) == number) {
            printf("The %.0f is natural!",number);
        } else if (number == 0) {
            printf("The number is 0, so not natural");
        } else if (number < 0) {
            printf("The %f is Negative, so not natural", number);
        } else {
            printf("The %.2f is not natural", number);
        }
        
        printf("\nContinue? (y/n): ");
        scanf(" %c", &choice);
    }
    
    return 0;
}
