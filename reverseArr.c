#include <stdio.h>
void printArr(int arr[],int n){
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}
void swap(int *n, int *m) {
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}
int main() {
    int n,j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The Original Array:\n");
    printArr(arr,n);

    j=n-1;
    for(int i = 0; i < n/2; i++) {
        swap(&arr[i],&arr[j]);
        j--;
    }
    printf("\nThe New Array:\n");
    printArr(arr,n);

    return 0;
}

    // int arr[]={1,2,3,4,5},arrRev[5],j=4;
    // for(int i=0;i<5;i++){
    //     printf("%d\t",arr[i]);
    // }
    // for(int i=0;i<5;i++){
    //     arrRev[j]=arr[i];
    //     j--;
    // }
    // printf("\n");
    // for(int i=0;i<5;i++){
    //     printf("%d\t",arrRev[i]);
    // }
