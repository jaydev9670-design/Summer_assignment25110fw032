//create bank account system


#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount account;
    int choice;
    float amount;
    int accountCreated = 0;

    while (1) {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &account.accountNumber);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", account.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &account.balance);

            accountCreated = 1;
            printf("Account created successfully!\n");
            break;

        case 2:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                account.balance += amount;
                printf("Deposit successful!\n");
            } else {
                printf("Invalid amount.\n");
            }
            break;

        case 3:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount.\n");
            } else if (amount > account.balance) {
                printf("Insufficient balance.\n");
            } else {
                account.balance -= amount;
                printf("Withdrawal successful!\n");
            }
            break;

        case 4:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("\n----- ACCOUNT DETAILS -----\n");
            printf("Account Number : %d\n", account.accountNumber);
            printf("Account Holder : %s\n", account.name);
            printf("Balance         : %.2f\n", account.balance);
            break;

        case 5:
            printf("Thank you for using the Bank Account System.\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}