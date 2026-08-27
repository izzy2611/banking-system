# banking-system

## Project Overview
This project is a model banking system that allows users to create accounts, validates pin number input, deposit money to their accounts and view their balances.

## Technologies used
- C
- GCC
- Structures


## Concepts Demonstrated
- Structures
- Input validation
- while/for loops
- if/else statements
- User input
- Arrays
  
## How to run
1. Copy 'gcc -Wall -Wextra -std=c11 banking-system.c -o banking-system' into the terminal
2. Run './banking-system
   
## Example output

Please pick an option:
1. Create new account
2. Transfer money
3. View balance
1

Please enter your name:
Izzy

Please create a 4 digit pin number:
12345

That pin number is too long. Please enter a valid pin number:
123

That pin number is too short. Please enter a valid pin number:
1234

Your account number is: 0
Your balance is: 0

Would you like to go back to the menu? Y/N
Y

Please pick an option:
1. Create new account
2. Transfer money
3. View balance
2

Please enter your account number:
0

How much would you like to transfer?
50

Would you like to go back to the menu? Y/N
Y

Please pick an option:
1. Create new account
2. Transfer money
3. View balance
3

What is your account number?
0

Your balance is: 50 

Would you like to go back to the menu? Y/N
N

##Future Improvements
- Add withdrawal functionality
- Allow transfers between multiple accounts
- Add PIN authentication when accessing an account
- Add persistent data storage using file handling
