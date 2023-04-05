#include <stdio.h>
int main()
{
    int balance = 200;
    int amount,pin,choice,ID;
    int count = 0;
    printf("Hello and welcome to our esteemed ATM services.\n ");
    printf("Enter your 6 digit pin: ");
    scanf("%d",&pin);
    while(pin != 123456){
        count++;
        if(count == 2){
            printf("No more attempts are allowed");
            return 0;
        }
        printf("Please try again:");
        scanf("%d",&pin);
    }

    do{
    
    printf("\n1. TO check balance\n2.To withdraw cash\n3. To deposit cash\n4. Apply for a loan\n5. Exit\n Enter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        printf("Your current balance is: %d\n",balance);
        break;
        case 2:
        printf("Enter amount to withdraw:");
        scanf("%d",&amount);
        if(amount > balance){
            printf("Your balance is insufficient\n");
        }
        else{
            balance-=amount;
            printf("Your new account balance is %d",balance);
        }
        break;

         case 3:
        printf("Enter amount to deposit:");
        scanf("%d",&amount);
        balance+=amount;
        printf("Your new balance is: %d\n",balance);
        break;

        case 4:
        printf("Enter amount you want to apply\n");
        scanf("%d",&amount);
        if(balance >= 5000){
            printf("Enter your ID number:");
            scanf("%d",&ID);
            printf("Collect your cash at counter 6\n");
        }
        else{
            printf("You are not ligible for the loan \n");
        }
        break;

        case 5:
        printf("Thank you for choosing our services...Welcome back!\n");
        return 0;

        default :
        printf("Invalid option please try again....thank you");
    }

    }
    
    while(1);
    return 0;
}