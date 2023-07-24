#include<stdio.h>

void printFun(char c);

int main(){
    char c,i='H';
    printf("Enter to print: ");
    scanf("%c",&c);
    printFun(c);
    printFun(i); 
    return 0;
}

void printFun(char c){
    printf("%c",c);
}