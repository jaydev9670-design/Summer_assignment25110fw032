//create student record management system
#include <stdio.h>
int main() {
    int studentId[100], marks[100];
    char name[100][50];
    char course[100][50];

    int count = 0;
    int choice, searchId, i, found;

    while (1) {
        printf("\nSTUDENT RECORD MANAGEMENT SYSTEM\n");
        printf("1. Add student\n");
        printf("2. Display all students\n");
        printf("3. Search student\n");
        printf("4. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("enter student id: ");
            scanf("%d", &studentId[count]);

            printf("enter student name: ");
            scanf("%s", name[count]);

            printf("enter course: ");
            scanf("%s", course[count]);

            printf("enter marks: ");
            scanf("%d", &marks[count]);

            count++;

            printf("student added successfully!\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("no student records found.\n");
            }
            else {
                printf("\nstudent records\n");

                for (i = 0; i < count; i++) {
                    printf("\nstudent %d\n", i + 1);
                    printf("student id: %d\n", studentId[i]);
                    printf("name: %s\n", name[i]);
                    printf("course: %s\n", course[i]);
                    printf("marks: %d\n", marks[i]);
                }
            }
        }

        else if (choice == 3) {

            printf("enter student id to search: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < count; i++) {
                if (studentId[i] == searchId) {
                    printf("\nstudent found\n");
                    printf("student id: %d\n", studentId[i]);
                    printf("name: %s\n", name[i]);
                    printf("course: %s\n", course[i]);
                    printf("marks: %d\n", marks[i]);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("student not found.\n");
            }
        }

        else if (choice == 4) {
            break;
        }

        else {
            printf("invalid choice. please try again.\n");
        }
    }
    return 0;
}


