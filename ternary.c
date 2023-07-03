#include <stdio.h>
void main(){
    /*
        Ternary Operator Testing
            SYNTAX: <condition>?//if true://if false
    */
   int age;
   printf("Enter age : ");
   scanf("%d",&age);
   age>18&&age<150?printf("Can VOTE"):age>=150?printf("Might be dead"):printf("Can't VOTE");
   age>18?printf("\nCan DRIVE"):printf("\nCan't DRIVE");
}