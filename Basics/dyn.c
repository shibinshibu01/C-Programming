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
    printf("\nmalloc\n");
    ptr= (int *)malloc(nMalloc*sizeof(int));
    //printf("Enter %d numbers to array: ",nMalloc);
    //input(ptr,nMalloc);
    print(ptr,nMalloc);
    printf("\ncalloc\n");
    ptr= (int *)calloc(nMalloc,sizeof(int));
    print(ptr,nMalloc);
    printf("\nrealloc\n");
    ptr= realloc(ptr,8);
    print(ptr,8);
    printf("\nrelloc\n");
    ptr= realloc(ptr,2);
    print(ptr,2);
    
    printf("\n\nSize of Array : %d",sizeof(arr));
    printf("\nSize of Dynamically Allocated Array : %d",sizeof(ptr)*nMalloc);

    free(ptr);
}