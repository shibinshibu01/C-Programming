#include <stdio.h>
void main(){
    //area of a square
    float sideSquare, areaSquare;
    printf("Find the Area of a Square!\n");
    printf("Enter the side value: ");
    scanf("%f",&sideSquare);
    areaSquare=sideSquare*sideSquare;
    printf("The area of the square with side %f is %f",sideSquare,areaSquare);
}