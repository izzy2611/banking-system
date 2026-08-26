#include <stdio.h>
#include <string.h>
#include "account_details.h"

int main(void) {

    int num_of_accounts = 0;
    int user_choice;
    int balance = 0;
    char main_menu;

    struct account_details accounts[100];
    FILE *fptr;
    fptr = fopen("Accounts.txt", "w");
    fprintf(fptr, "Name: Account Number:");
    printf("Would you like to go to the menu? Y/N");
    scanf(" %c", &main_menu);
    while (main_menu == 'Y') {
        printf("Please pick an option:\n");
        printf("1. Create new account\n");

        scanf(" %d", &user_choice);

        if (user_choice == 1) {

            printf("Please enter your name:\n");
            scanf(" %s", accounts[num_of_accounts].name);

            printf("Please create a pin number:\n");
            scanf(" %s", accounts[num_of_accounts].pin_number);  

            fptr = fopen("Accounts.txt", "r");
            

            printf("Your account number is: %d",  num_of_accounts); 
            printf("Your balance is: %d",  balance);

            fprintf(fptr, "%s %d \n", accounts[num_of_accounts].name, num_of_accounts);

            num_of_accounts++;
            printf("Would you like to go back to the menu? Y/N\n");
            scanf(" %c", &main_menu);
            
        //else if(user_choice == 2) {



        //}
        }
    }

    return 0;
}
