#include<stdio.h>
void main()
{
    float balance,amount;
    int choice;
    printf("Enter current account balance: ");
    scanf("%f",&balance);
    printf("\n1. Balance Inquiry");
    printf("\n2. Cash Withdrawal");
    printf("\n3. Cash Deposit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    if (choice == 1)
    {
        printf("Current balance = %.2f", balance);
    }
    else if (choice == 2)
    {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);

        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            printf("Transaction successful");
            printf("\nRemaining balance = %.2f", balance);
        }
        else
        {
            printf("Insufficient balance");
        }
    }
    else if (choice == 3)
    {
        printf("Enter deposit amount: ");
        scanf("%f", &amount);

        if (amount > 0)
        {
            balance = balance + amount;
            printf("Deposit successful");
            printf("\nUpdated balance = %.2f", balance);
        }
        else
        {
            printf("Invalid deposit amount");
        }
    }
    else
    {
        printf("Invalid option");
    }
}