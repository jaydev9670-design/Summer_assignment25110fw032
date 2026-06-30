//Develop complegtge mini project using arrays,string and function
//This mini project is related to details of student of Gl bajaj for placement
 
 #include <stdio.h>
#include <string.h>

#define MAX 50

char name[MAX][50];
char branch[MAX][30];
char choice[MAX][30];
int roll[MAX];
int count = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Branch: ");
    scanf(" %[^\n]", branch[count]);

    printf("\nPlacement Choices");
    printf("\n1. Software Developer");
    printf("\n2. Data Analyst");
    printf("\n3. Cyber Security");
    printf("\n4. Core Company");

    int ch;
    printf("\nEnter Choice (1-4): ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: strcpy(choice[count], "Software Developer"); break;
        case 2: strcpy(choice[count], "Data Analyst"); break;
        case 3: strcpy(choice[count], "Cyber Security"); break;
        case 4: strcpy(choice[count], "Core Company"); break;
        default: strcpy(choice[count], "Not Selected");
    }

    count++;
    printf("\nChoice Submitted Successfully!\n");
}

void displayStudents()
{
    int i;

    printf("\n\n===== GL BAJAJ PLACEMENT CHOICE LIST =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nBranch  : %s", branch[i]);
        printf("\nChoice  : %s\n", choice[i]);
    }
}

int main()
{
    int option;

    do
    {
        printf("\n\n===== GL BAJAJ PLACEMENT CHOICE SYSTEM =====");
        printf("\n1. Add Student");
        printf("\n2. Display Choices");
        printf("\n3. Exit");
        printf("\nEnter Option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                printf("\nThank You!");
                break;

            default:
                printf("\nInvalid Option!");
        }

    } while(option != 3);

    return 0;
}