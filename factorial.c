#include <stdio.h>

void main(){
    int number,numTemp, factorial=1,ch;
    do{
        printf("Enter a number to find the factorial: \n");
        scanf("%d", &number);
        numTemp=number;
        for (int i = 0; i < number; i++){
            factorial*=numTemp;
            numTemp--;
        }
        printf("The factorial of %d is %d\n", number, factorial);
        printf("0 to exit.\nPress any number to calculate again");
        scanf("%d", &ch);
    }while(ch!=0);
    printf("Thank You\n");
}