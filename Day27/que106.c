//Write a program to Create employee management system.

#include <stdio.h>

int main() {
    int empId[100], salary[100];
    char name[100][50];
    char department[100][50];

    int count = 0;
    int choice, searchId, i, found;

    while (1) {
        printf("\nEMPLOYEE MANAGEMENT SYSTEM\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Search employee\n");
        printf("4. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("enter employee id: ");
            scanf("%d", &empId[count]);

            printf("enter employee name: ");
            scanf("%s", name[count]);

            printf("enter department: ");
            scanf("%s", department[count]);

            printf("enter salary: ");
            scanf("%d", &salary[count]);

            count++;

            printf("employee added successfully!\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("no employee records found.\n");
            }
            else {
                printf("\nemployee records\n");

                for (i = 0; i < count; i++) {
                    printf("\nemployee %d\n", i + 1);
                    printf("employee id: %d\n", empId[i]);
                    printf("name: %s\n", name[i]);
                    printf("department: %s\n", department[i]);
                    printf("salary: %d\n", salary[i]);
                }
            }
        }

        else if (choice == 3) {

            if (count == 0) {
                printf("no employee records found.\n");
            }
            else {
                printf("enter employee id to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (empId[i] == searchId) {

                        printf("\nemployee found\n");
                        printf("employee id: %d\n", empId[i]);
                        printf("name: %s\n", name[i]);
                        printf("department: %s\n", department[i]);
                        printf("salary: %d\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("employee not found.\n");
                }
            }
        }

        else if (choice == 4) {
            printf("exiting program\n");
            break;
        }

        else {
            printf("invalid choice\n");
        }
    }

    return 0;
}