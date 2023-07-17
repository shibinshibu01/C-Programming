#include <stdio.h>
#include <string.h>

int checkPass(char pass[]){
    int flag = 0;
    char passConfirm[100];

    do{
        if(flag==0){
            printf("\n\tConfirm your password: ");
            fgets(passConfirm, 100, stdin);
            passConfirm[strcspn(passConfirm, "\n")] = '\0'; // Remove newline character
            if(strcmp(passConfirm,pass)!=0){
                flag=1;
            }
        } else if(flag==1){
            printf("\n---------------------Re Enter!---------------------\n\n\tConfirm your password: ");
            fgets(passConfirm, 100, stdin);
            passConfirm[strcspn(passConfirm, "\n")] = '\0'; // Remove newline character
        }        
    }while(strcmp(passConfirm,pass)!=0);
    printf("\n---------------------------------------------------\n");
    return 0;
}

char* addSalt(char pass[], char salt[]){
    strcat(pass, salt);
    return pass;
}

int main(){

    char pass[100],salt[]="abc@1123",new[100];

    printf("----------------------Welcome----------------------\n\n\tEnter your password: ");
    fgets(pass, 100, stdin);
    pass[strcspn(pass, "\n")] = '\0'; // Remove newline character
    // scanf("%s",pass);
    checkPass(pass);
    strcpy(new,pass);
    addSalt(new, salt);
    printf("--------------------Password!----------------------\n\n\tYour Password: ");
    puts(pass);
    printf("\n\tSalting: ");
    puts(new);
    printf("\n---------------------------------------------------\n");
    return 0;
}