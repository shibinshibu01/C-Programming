#include <stdio.h>
int sumNatural(int count,int sum);

void main(){
    int count,sum=0;
    printf("Enter count of Natural Numbers: ");
    scanf("%d",&count);
    sum=sumNatural(count,sum);
    printf("The sum of %d Natural Numbers is %d",count,sum);
}

int sumNatural(int count,int sum){
    if(count==0){
        return sum;
    } else {
        sum+=count;
        return sumNatural(count-1,sum);
    }
}