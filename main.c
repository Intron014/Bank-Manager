#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void new_acc(BANK *database, int people){

}

int main(){
    int option=99;
    int people=5;
    //
    BANK database[people];
    printf("Welcome to PLACEHOLDER1's bank internal systems\n");
    // main_menu(&option);
    while(option){
        printf("1. Accounts on file\n2. New account\n0. Exit");
        scanf("%i", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                //acc_view();
                break;
            case 2:
                printf("Welcome to PLACEHOLDER1 bank\n");
                printf("Please enter your name: ");
                fflush(stdin);
                gets(database[0].user.name);
                fflush(stdin);
                printf("Please enter your ID: ");
                gets(database[0].user.id);
                fflush(stdin);
                database[0].user.creditaccepted=0;
                printf("File registered, creating bank account. . .");
                for(int i=0; i<22; i++){
                    database[0].account.IBAN[i]= random_number(0, 9);
                }
                printf_s((const char *) database[0].account.IBAN);
            default:
                printf("Wrong option selected\n");
                break;
        }
    }
    return 0;
}
