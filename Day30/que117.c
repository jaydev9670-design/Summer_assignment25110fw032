//create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[10];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Student Records.\n");
                } else {
                    printf("\nRoll\tName\tMarks\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n",
                               s[i].roll,
                               s[i].name,
                               s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(s[i].roll == roll) {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}