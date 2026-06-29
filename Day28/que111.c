//write a program create ticket booking system

#include <stdio.h>
#include <string.h>

#define TOTAL_SEATS 10

struct Ticket {
    int seatNo;
    char name[50];
    int booked;  
};

int main() {
    struct Ticket seats[TOTAL_SEATS];
    int choice, seat;
    for (int i = 0; i < TOTAL_SEATS; i++) {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
        strcpy(seats[i].name, "");
    }

    while (1) {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Booked Tickets\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nAvailable Seats:\n");
            for (int i = 0; i < TOTAL_SEATS; i++) {
                if (seats[i].booked == 0)
                    printf("Seat %d\n", seats[i].seatNo);
            }
            break;

        case 2:
            printf("Enter seat number (1-%d): ", TOTAL_SEATS);
            scanf("%d", &seat);

            if (seat < 1 || seat > TOTAL_SEATS) {
                printf("Invalid seat number!\n");
            } else if (seats[seat - 1].booked) {
                printf("Seat already booked!\n");
            } else {
                printf("Enter passenger name: ");
                scanf(" %[^\n]", seats[seat - 1].name);
                seats[seat - 1].booked = 1;
                printf("Ticket booked successfully!\n");
            }
            break;

        case 3:
            printf("Enter seat number to cancel: ");
            scanf("%d", &seat);

            if (seat < 1 || seat > TOTAL_SEATS) {
                printf("Invalid seat number!\n");
            } else if (!seats[seat - 1].booked) {
                printf("Seat is already available!\n");
            } else {
                seats[seat - 1].booked = 0;
                strcpy(seats[seat - 1].name, "");
                printf("Ticket cancelled successfully!\n");
            }
            break;

        case 4:
            printf("\nBooked Tickets:\n");
            int found = 0;
            for (int i = 0; i < TOTAL_SEATS; i++) {
                if (seats[i].booked) {
                    printf("Seat %d - %s\n",
                           seats[i].seatNo,
                           seats[i].name);
                    found = 1;
                }
            }
            if (!found)
                printf("No tickets booked.\n");
            break;

        case 5:
            printf("Thank you!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}