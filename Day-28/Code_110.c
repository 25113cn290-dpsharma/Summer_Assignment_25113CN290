// Write a program to Create bank account system.

#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

struct Bank b[100];
int count = 0;

void createAccount()
{
    printf("Enter Account Number: ");
    scanf("%d", &b[count].accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", b[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b[count].balance);

    count++;

    printf("Account Created Successfully.\n");
}

void deposit()
{
    int accNo, i;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(i = 0; i < count; i++)
    {
        if(b[i].accNo == accNo)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            b[i].balance += amount;

            printf("Amount Deposited Successfully.\n");
            return;
        }
    }

    printf("Account Not Found.\n");
}

void withdraw()
{
    int accNo, i;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(i = 0; i < count; i++)
    {
        if(b[i].accNo == accNo)
        {
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= b[i].balance)
            {
                b[i].balance -= amount;
                printf("Withdrawal Successful.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            return;
        }
    }

    printf("Account Not Found.\n");
}

void display()
{
    int accNo, i;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(i = 0; i < count; i++)
    {
        if(b[i].accNo == accNo)
        {
            printf("\n----- Account Details -----\n");
            printf("Account Number : %d\n", b[i].accNo);
            printf("Account Holder : %s\n", b[i].name);
            printf("Balance        : %.2f\n", b[i].balance);
            return;
        }
    }

    printf("Account Not Found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } 
    while(choice != 5);

    return 0;
}