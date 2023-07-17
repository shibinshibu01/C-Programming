#include <stdio.h>

typedef int num;
typedef struct thisIsAnExample {
    num number;
    num *ptr;
}th;

void main(){
    th eg;
    th *ptr1=&eg;
    num i=4;
    eg.number = i;
    eg.ptr = &eg.number;
    printf("%d\n", *(eg.ptr));
    ptr1->number = 5;
    ptr1->ptr = &(ptr1->number);
    printf("%d\n", *(ptr1->ptr));
}