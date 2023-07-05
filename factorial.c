#include <stdio.h>

void main(){
    int number,factorial,ch;
    do{
        printf("Enter a number to find the factorial: \n");
        scanf("%d", &number);
        factorial=1;
        for (int i = 1; i <= number; i++){
            factorial*=i;
        }
        printf("The factorial of %d is %d\n", number, factorial);
        printf("0 to exit.\nPress any number to calculate again");
        scanf("%d", &ch);
    }while(ch!=0);
    printf("Thank You\n");
}