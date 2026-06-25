#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int Product_ID;
    int Product_Quantity;
};
int main() {
    struct Product inventory[10] = {
        {125, 2}, {548, 5}, {658, 9}, {496, 4}, {265, 6},
        {549, 8}, {369, 2}, {568, 4}, {999, 5}, {336, 6}
    };
    int choice;
    do {
        printf("====WELCOME TO DMART====\n");
        printf("    ======MENU======\n");
        printf("1: View Inventory Stock\n");
        printf("2: Purchase Items\n");
        printf("3: Checkout & Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        while (choice < 1 || choice > 3) {
            printf("Invalid Choice, please try again\n");
            printf("1: View Inventory Stock\n");
            printf("2: Purchase Items\n");
            printf("3: Checkout & Exit\n");
            scanf("%d", &choice);
        }
        if (choice == 1) {
            printf("\tProduct_ID\tProduct_Quantity\n");
            for (int i = 0; i < 10; i++) {
                printf("\t%d\t\t%d\n", inventory[i].Product_ID, inventory[i].Product_Quantity);
            }
        } 
        else if (choice == 2) {
            int id, qty, found = 0;
            printf("Enter Product ID to purchase: ");
            scanf("%d", &id);
            printf("Enter Quantity: ");
            scanf("%d", &qty);
            for (int i = 0; i < 10; i++) {
                if (inventory[i].Product_ID == id) {
                    found = 1;
                    if (inventory[i].Product_Quantity >= qty) {
                        inventory[i].Product_Quantity -= qty;
                        printf("Purchase successful! Remaining stock: %d\n", inventory[i].Product_Quantity);
                    } else {
                        printf("Insufficient stock! Available: %d\n", inventory[i].Product_Quantity);
                    }
                    break;
                }
            }
            if (!found) {
                printf("Product ID not found!\n");
            }
        }
        else if (choice == 3) {
            printf("Thank you for shopping at DMART!\n");
        }
    } while (choice != 3);
    return 0;
}
