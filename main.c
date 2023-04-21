#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void new_acc(BANK *database, int people){

}

int main(){
    int option=99;
    int people=1;
    //
    BANK database[people];
    printf("Welcome to PLACEHOLDER1's bank internal systems\n");
    // main_menu(&option);
    while(option){
        int current_select=people-1;
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
                gets(database[current_select].user.name);
                fflush(stdin);
                printf("Please enter your ID: ");
                gets(database[current_select].user.id);
                fflush(stdin);
                database[current_select].user.creditaccepted=0;
                printf("File registered, creating bank account: ES");
                for(int i=0; i<22; i++){
                    database[current_select].account.IBAN[i]= random_number(0, 9);
                    printf("%i", database[current_select].account.IBAN[i]);
                }
                printf("\n");
                break;
            default:
                printf("Wrong option selected\n");
                break;
        }
    }
    return 0;
}
