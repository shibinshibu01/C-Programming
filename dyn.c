#include <stdio.h>
#include <stdlib.h>

void print(int *arr,int n){
    for(int i = 0; i <n;i++){
        printf("%d\t",*arr);
        arr++;
    }
}

void input(int *arr,int n){
    
    for(int i = 0; i <n;i++){
        scanf("%d",arr);
        arr++;
    }
}

void main(){
    int *ptr;
    int arr[100];
    int nArr,nMalloc;

    printf("Enter no: ");
    scanf("%d",&nArr);
    printf("Enter %d numbers to array: ",nArr);
    input(arr,nArr);
    print(arr,nArr);

    printf("\n\nEnter no: ");
    scanf("%d",&nMalloc);
    ptr= (int *)malloc(nMalloc*sizeof(int));
    printf("Enter %d numbers to array: ",nMalloc);
    input(ptr,nMalloc);
    print(ptr,nMalloc);
    
    printf("\n\nSize of Array : %d",sizeof(arr));
    printf("\nSize of Dynamically Allocated Array : %d",sizeof(ptr)*nMalloc);

    free(ptr);
}