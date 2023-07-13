#include <stdio.h>

void swapNum(int n, int m) {
    int temp;
    temp = n;
    n = m;
    m = temp;
    printf("Call by Value\nnum1 = %d, num2 = %d\n\n", n, m);
}

void swapNum_(int *n, int *m) {
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
    printf("Call by Reference\nnum1 = %d, num2 = %d\n\n", *n, *m);
}

int main() {
    int num1 = 15, num2 = 10;
    int *ptr = &num1, *ptr2 = &num2;
    swapNum(num1, num2);
    printf("Call by Value in Main\nnum1 = %d, num2 = %d\n\n", num1, num2);
    swapNum_(ptr, ptr2);
    printf("Call by Reference in Main\nnum1 = %d, num2 = %d\n\n", num1, num2);
    return 0;
}
