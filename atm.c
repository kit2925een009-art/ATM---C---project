#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, deposit, withdraw;

    while (1) {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Your Current Balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);
            balance = balance + deposit;
            printf("Amount Deposited Successfully!\n");
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);

            if (withdraw <= balance) {
                balance = balance - withdraw;
                printf("Please collect your cash.\n");
            } else {
                printf("Insufficient Balance!\n");
            }
            break;

        case 4:
            printf("Thank you for using ATM!\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
