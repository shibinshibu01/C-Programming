#include <stdio.h>

float calGST(float clothes[], int size) {
    float gst = 0;
    for (int i = 0; i < size; i++) {
        gst += (12 * clothes[i]) / 100;
    }
    return gst;
}

int main() {
    float clothes[100], gst[100];
    int num;
    float rate = 0, gstRate = 0;

    printf("Enter the number of items: ");
    scanf("%d", &num);

    printf("Enter the price of %d items: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%f", &clothes[i]);
        rate += clothes[i];
    }

    gstRate = calGST(clothes, num);

    printf("\nThe Total Price = %.2f (Rate) + %.2f (GST) = %.2f", rate, gstRate, rate + gstRate);

    return 0;
}
