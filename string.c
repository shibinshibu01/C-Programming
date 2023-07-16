#include<stdio.h>

void printFun(char c);

int main(){
    char arr[]={'S','H','I','\0'};
    char arr1[]="BIN";
    char arr2[10];
    scanf("%s",arr2);
    printf("%s%s %s",arr,arr1,arr2);
    return 0;
}
