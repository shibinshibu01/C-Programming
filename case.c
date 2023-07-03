#include <stdio.h>

void main() {
    char character, choice = 'Y';
    
    while(choice == 'y' || choice == 'Y'){
        printf("Enter a character to check the case: ");
        scanf(" %c", &character);

        if (character >= 'a' && character <= 'z') {
            printf("%c is lowercase!\n", character);
        }
        else if (character >= 'A' && character <= 'Z') {
            printf("%c is uppercase!\n", character);
        }
        else {
            printf("%c is not a letter!\n", character);
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &choice);
    }
}
