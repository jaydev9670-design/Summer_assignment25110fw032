//create salary management system

#include <stdio.h>

int main() {
    int empId[100];
    int salary[100];
    char name[100][50];

    int count = 0;
    int choice, searchId, i, found;

    while (1) {
        printf("\nSALARY MANAGEMENT SYSTEM\n");
        printf("1. Add employee salary\n");
        printf("2. Display all salaries\n");
        printf("3. Search salary\n");
        printf("4. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("enter employee id: ");
            scanf("%d", &empId[count]);

            printf("enter employee name: ");
            scanf("%s", name[count]);

            printf("enter salary: ");
            scanf("%d", &salary[count]);

            count++;

            printf("salary added successfully!\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("no salary records found.\n");
            }
            else {
                printf("\nsalary records\n");

                for (i = 0; i < count; i++) {
                    printf("\nemployee %d\n", i + 1);
                    printf("employee id: %d\n", empId[i]);
                    printf("name: %s\n", name[i]);
                    printf("salary: %d\n", salary[i]);
                }
            }
        }

        else if (choice == 3) {

            if (count == 0) {
                printf("no salary records found.\n");
            }
            else {
                printf("enter employee id to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (empId[i] == searchId) {

                        printf("\nsalary found\n");
                        printf("employee id: %d\n", empId[i]);
                        printf("name: %s\n", name[i]);
                        printf("salary: %d\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("salary not found.\n");
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