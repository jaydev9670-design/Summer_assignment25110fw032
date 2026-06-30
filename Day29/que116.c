//create inventory management system
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product item[MAX];
    int count = 0;
    int choice, id, i, found;
    int newQty;

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if(count == MAX) {
                    printf("Inventory is full.\n");
                    break;
                }

                printf("Enter Product ID: ");
                scanf("%d", &item[count].id);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", item[count].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[count].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[count].price);

                count++;
                printf("Product added successfully.\n");
                break;

            case 2:
                if(count == 0) {
                    printf("No products available.\n");
                } else {
                    printf("\n-----------------------------------------------------------\n");
                    printf("ID\tName\t\tQuantity\tPrice\n");
                    printf("-----------------------------------------------------------\n");

                    for(i = 0; i < count; i++) {
                        printf("%d\t%-15s\t%d\t\t%.2f\n",
                               item[i].id,
                               item[i].name,
                               item[i].quantity,
                               item[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++) {
                    if(item[i].id == id) {
                        printf("\nProduct Found\n");
                        printf("ID       : %d\n", item[i].id);
                        printf("Name     : %s\n", item[i].name);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Product not found.\n");

                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++) {
                    if(item[i].id == id) {
                        printf("Enter New Quantity: ");
                        scanf("%d", &newQty);

                        item[i].quantity = newQty;

                        printf("Quantity updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Product not found.\n");

                break;

            case 5:
                printf("Enter Product ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++) {
                    if(item[i].id == id) {

                        for(int j = i; j < count - 1; j++) {
                            item[j] = item[j + 1];
                        }

                        count--;
                        found = 1;

                        printf("Product deleted successfully.\n");
                        break;
                    }
                }

                if(!found)
                    printf("Product not found.\n");

                break;

            case 6:
                printf("Exiting Inventory Management System...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 6);

    return 0;
}