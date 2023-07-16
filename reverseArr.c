#include <stdio.h>

void main(){
    int arr[]={1,2,3,4,5},arrRev[5],j=4;
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<5;i++){
        arrRev[j]=arr[i];
        j--;
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arrRev[i]);
    }
}