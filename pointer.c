#include <stdio.h>
 void main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    int _age_=(int)ptr;
    printf("age= %d\n",age);
    printf("ptr= %p\n",ptr);
    printf("*ptr= %d\n",*ptr);
    printf("_age= %d\n",_age);
    printf("_age_= %u\n",_age_);
 }