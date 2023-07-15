#include <stdio.h>
int calGST(int clothes[]){
    int gst;
    for(int i=0; i<sizeof(clothes); i++){
        gst=(12*clothes[i])/100;
    }
    return gst;
}
int main(){
    int clothes[100],gst[100];
    int num,rate=0,gstRate=0;
    printf("Enter no of items: ");
    scanf("%d",&num);
    printf("Enter price of %d Items: ",num);
    for(int i=0; i<num; i++){
        scanf("%d",&clothes[i]);
        gst[i] = calGST(clothes);
        rate+=clothes[i];
        gstRate+=gst[i];
    }
    printf("\nThe Total Price = %d(Rate) + %d(GST) = %d",rate,gstRate,rate+gstRate);

    return 0;
}