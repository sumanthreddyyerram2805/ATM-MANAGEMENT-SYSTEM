# ATM Bank Management System

A simple menu-driven ATM Bank Management System developed in C. The program allows users to deposit money, withdraw funds while maintaining a minimum balance, and check their account balance. It demonstrates fundamental C programming concepts through a console-based application.

## Features

* Deposit money
* Withdraw money with minimum balance validation
* Check account balance
* Menu-driven interface
* Supports multiple transactions in a single session

## Technologies Used

* C Programming
* Standard Input/Output Library (`stdio.h`)

## Functionalities

* **Deposit:** Adds the entered amount to the account balance.
* **Withdraw:** Allows withdrawal only if the remaining balance is at least ₹1000.
* **Balance Enquiry:** Displays the current account balance.

## Concepts Used

* Variables
* Switch-Case
* Loops (`do-while`)
* Conditional Statements (`if-else`)
* User Input/Output
* Basic Arithmetic Operations

## How to Run

1. Compile the program:

   ```
   gcc atm.c -o atm
   ```
2. Run the executable:

   ```
   ./atm
   ```

## Future Improvements

* User authentication (PIN)
* Multiple account support
* Transaction history
* File handling for data persistence
* Interest and account management features
