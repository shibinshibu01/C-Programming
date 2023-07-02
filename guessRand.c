#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    //Guess random number
    srand(time(0));
    int random=rand(),number;
    printf("------Guess The Number------\n\n");
    printf("Enter a Number : ");
    scanf("%d",&number);
    printf("\n----------------------------\n\n");
    if (random==number){
        printf("You Won!!");
    }
    else{
        printf("You should have guessed %d\n",random);
        printf("You Lost!");
    }
    printf("\n\n----------------------------");
}