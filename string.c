#include<stdio.h>

void printFun(char c);

int main(){

    //1
    // char arr[]={'S','H','I','\0'};
    // char arr1[]="BIN";
    // char arr2[10];
    // scanf("%s",arr2);
    // printf("%s%s %s",arr,arr1,arr2);

    //2
    // char arr[100];
    // //gets(arr);
    // fgets(arr,100,stdin);
    // puts(arr);

    //3
    // char *str="Shibin";
    // puts(str);
    // str="Shibu";
    // puts(str);
    // return 0;

    //4
    char str[100];
    int count = 0, i = 0;
    fgets(str, 100, stdin);
    while (1) {
        if (str[i] == '\0' || str[i] == '\n')
            break;
        else
            count++;
        i++;
    }
    printf("%d", count);
}
