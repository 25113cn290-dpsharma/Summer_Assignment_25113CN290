// Write a program to Create ATM simulation.

#include<stdio.h>
float balance = 100000.0;

void checkBalance() 
{
    printf("\nCurrent Balance: Rs. %.2f\n",balance);
}

void deposit() 
{
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount>0) 
        {
            balance+=amount;
            printf("Rs. %.2f deposited successfully.\n",amount);
        } 
    else 
        {
            printf("Invalid amount!\n");
        }  
}

void withdraw() 
{
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f",&amount);
    if (amount<=0) 
        {
            printf("Invalid amount!\n");
        } 
    else if (amount>balance) 
        {
            printf("Insufficient balance!\n");
        } 
    else
        {
            balance-=amount;
            printf("Rs. %.2f withdrawn successfully.\n",amount);
        }
}

int main() 
{
    int choice;
    do 
    {
        printf("\n ===== ATM MENU ===== \n");
        printf("1. Check Balance \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Exit \n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch (choice) 
        {
            case 1:
                checkBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                printf("Thank you for using the ATM! \n");
                break;
            default:
                printf("Invalid choice! Please try again. \n");
        }
    }
    while (choice != 4);

    return 0;
}