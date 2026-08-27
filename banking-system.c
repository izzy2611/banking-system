#include <stdio.h>
#include <string.h>
#include "account_details.h"

int main(void) {

    int num_of_accounts = 0;
    int user_choice;
    int balance = 0;
    char main_menu = 'Y';
    int user_account;
    int transfer_amount;
    int i;

    struct account_details accounts[100];
    while (main_menu == 'Y') {
        printf("Please pick an option:\n");
        printf("1. Create new account\n");
        printf("2. Transfer money\n");
        printf("3. View balance\n");

        scanf(" %d", &user_choice);

        if (user_choice == 1) {

            printf("Please enter your name:\n");
            scanf(" %s", accounts[num_of_accounts].name);

            printf("Please create a 4 digit pin number:\n");
            scanf(" %s", accounts[num_of_accounts].pin_number); 
            while (strlen(accounts[num_of_accounts].pin_number) != 4) {
                if (strlen(accounts[num_of_accounts].pin_number) > 4) {
                    printf("That pin number is too long. Please enter a valid pin number:");
                    scanf(" %s", accounts[num_of_accounts].pin_number); 
            }
                else if (strlen(accounts[num_of_accounts].pin_number) < 4) {
                    printf("That pin number is too short. Please enter a valid pin number:");
                    scanf(" %s", accounts[num_of_accounts].pin_number); 
            }
        }

            //fptr = fopen("Accounts.txt", "r");
            

            printf("Your account number is: %d\n",  num_of_accounts); 
            printf("Your balance is: %d\n",  balance);

            
        
            num_of_accounts++;
            printf("Would you like to go back to the menu? Y/N\n");
            scanf(" %c", &main_menu);
    }
        else if(user_choice == 2) {
            printf("Please enter your account number:\n");
            scanf(" %d", &user_account);
            printf("How much would you like to transfer?");
            scanf(" %d", &transfer_amount);
            
            for (i = 0; i < num_of_accounts; i++){
                if (accounts[user_account].account_number == accounts[i].account_number){
                    accounts[i].balance += transfer_amount;
                    

                }   
            }
            printf("Would you like to go back to the menu? Y/N\n");
            scanf(" %c", &main_menu);
    }
        
        //view balance
        else if (user_choice == 3) {
            printf("What is your account number?\n");
            scanf(" %d", &user_account);
            for (i = 0; i < num_of_accounts; i++){
                if (accounts[user_account].account_number == accounts[i].account_number){
                    printf("Your balance is: %d \n", accounts[user_account].balance);
                }

        }
            printf("Would you like to go back to the menu? Y/N\n");
            scanf(" %c", &main_menu);
    }
    }
        
    return 0;
}

