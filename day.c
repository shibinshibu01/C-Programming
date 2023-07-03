#include <stdio.h>
void main(){
    char day,month;
    int choice,ch=1;
    while (ch!=0){
        printf("\nWanna check? (1 for day and 0 for month): ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("Enter a day (-use first letters-) : ");
                scanf(" %c",&day);
                switch(day){
                    case 'm':
                        printf("The Day is : ");
                        printf("Monday");
                        break;
                    case 't':
                        printf("The Day is : ");
                        printf("Tuesday");
                        break;
                    case 'w':
                        printf("The Day is : ");
                        printf("Wednesday");
                        break;
                    case 'T':
                        printf("The Day is : ");
                        printf("Thursday");
                        break;
                    case 'f':
                        printf("The Day is : ");
                        printf("Friday");
                        break;
                    case 's':
                        printf("The Day is : ");
                        printf("Saturday");
                        break;
                    case 'S':
                        printf("The Day is : ");
                        printf("Sunday");
                        break;
                    default :printf("Invalid input");
                }
                break;
            case 0:
                printf("Enter a month (-use first letters-) : ");
                scanf(" %c",&month);
                switch(month){
                    case 'd':
                        printf("The month is : ");
                        printf("December");
                        break;
                    default:
                        printf("The month is : ");
                        printf("Not December");
                }
                break;        
            default:printf("Enter 0 or 1");
        }
        printf("\nWanna check again? (1 for Yes and 0 for No): ");
        scanf("%d", &ch);
    }
}