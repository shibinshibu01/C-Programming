#include <stdio.h>

typedef int num;
typedef struct thisIsAnExample {
    num number;
    num *ptr;
}th;

struct demo {
    char character;
};

void main(){
    th eg,*ptr1=&eg;
    struct demo demo;
    num i=4;
    eg.number = i;
    eg.ptr = &eg.number;
    printf("%d\n", *(eg.ptr));
    ptr1->number = 5;
    printf("%d\n",ptr1->number);
    demo.character ='S';
    printf("%c\n", demo.character);
}