#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void displayAccounts(int balance[]);
void withdrawAmount(int balance[]);
void depositeAmount(int balance[]);

void displayAccounts(int balance[])
{
    int i;
    printf("\nAccounts Balance of 1 to 5:");
    for(i=0;i<SIZE;i++)
    {
        printf("\nAccount %d : %d",i+1,balance[i]);
    }
}

void depositeAmount(int balance[])
{
    int accNo,money;

    printf("\nEnter account number (1-5): ");
    scanf("%d", &accNo);
    if(accNo<1 || accNo>5)
    {
        printf("\nInvalid account no");
        exit(0);
    }

    printf("Enter deposit amount: ");
    scanf("%d", &money);

    balance[accNo-1] += money;

    printf("Amount deposited successfully!");
    printf("\nUpdated Amount :%d",balance[accNo-1]);
}


void withdrawAmount(int balance[])
{
    int accNo,money;
    printf("\nEnter the Account from which u want to withdraw[1 to 5]:");
    scanf("%d",&accNo);

    if(accNo<1 || accNo>5)
    {
        printf("\nEnter valid bank account");
        exit(0);
    }
    
    printf("\nEnter the money u want to withdraw:");
    scanf("%d",&money);

    if (money > balance[accNo - 1])
    {
        printf("Insufficient balance!");
    }
    else
    {
        balance[accNo - 1] -= money;
        printf("Withdrawal successful!");
        printf("\nUpdated Balance: %d", balance[accNo - 1]);
    }

}




void main()
{
    int choice;
    int balance[5]={1000,2000,3000,4000,5000};
    while (1)
    {
        printf("\n-------Bank System------");
        printf("\n1)-----Display all Account");
        printf("\n2)-----Deposite amount");
        printf("\n3)-----Withdraw money");
        printf("\n4)-----exit");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: displayAccounts(balance);
                    break;
            case 2: depositeAmount(balance);
                    break;
            case 3: withdrawAmount(balance);
                    break;
            case 4: exit(0);
            default:
                    printf("\nInvalid choice\n\tEnter valid choice");
        }
    }
    
    
}