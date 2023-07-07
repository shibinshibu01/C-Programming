#include <stdio.h>
#include <math.h>
int checkPrime(int num,int i){
    if(i>sqrt(num)){
        return 0;
    }
    if(num%i==0){
        return 1;
    }
    return checkPrime(num,i+1);

}
int main(){
    int num,i=2;
    printf("Enter a number to check whether Prime or Not: ");
    scanf("%d",&num);
     if(num==1){
        printf("Neither Prime nor Composite");
    } else {
        if(checkPrime(num,i)==1){
            printf("Not Prime");
        } else {
            printf("Prime");
        }
    }
}