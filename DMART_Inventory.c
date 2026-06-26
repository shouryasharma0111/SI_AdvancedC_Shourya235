#include <stdio.h>
int main() {
    int id[10]       = {100, 101, 102, 103, 104, 105, 106, 107, 109, 110};
    int stock[10]    = {10, 10, 15, 12, 5, 16, 13, 12, 10, 11};
    double mrp[10]   = {160000.00, 230000.00, 95000.00, 150000.00, 2100000.00,
                        100000.00, 68000.00, 160000.00, 180000.00, 90000.00};
    double discount[10] = {10.0, 15.0, 15.0, 20.0, 5.0, 10.0, 25.0, 8.0, 15.0, 5.0};
    char brand[10][30] = {"Samsung", "Apple", "One Plus", "Motorola", "VERTU Signature",
                          "Google", "Realme", "Vivo", "OPPO", "Xiaomi"};
    int choice, i;
    double grand_total = 0.0;
    do {
        printf("\n====WELCOME TO DMART====\n");
        printf("\n======MENU======\n");
        printf("1: View Inventory Stock\n");
        printf("2: Purchase Items\n");
        printf("3: Checkout & Exit\n");
        printf("Enter Your Choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Exiting...\n");
            return 1;
        }
        while (choice < 1 || choice > 3) {
            printf("\nInvalid Choice, please try again\n");
            printf("Enter Your Choice: ");
            scanf("%d", &choice);
        }
        if (choice == 1) {
            printf("\nProduct_ID\tBrand\t\tMRP\t\tDiscount%%\tAvailable_Qty\n");
            printf("-----------------------------------------------------------------------\n");
            for (i = 0; i < 10; i++) {
                printf("%d\t\t%-15s Rs.%.2f\t\t%.1f%%\t\t%d\n",
                       id[i], brand[i], mrp[i], discount[i], stock[i]);
            }
        }
        else if (choice == 2) {
            int PI, quantity, found_index = -1;
            printf("Enter the product ID: ");
            scanf("%d", &PI);
            for (i = 0; i < 10; i++) {
                if (PI == id[i]) {
                    found_index = i;
                    break;
                }
            }
            if (found_index != -1) {
                double final_price = mrp[found_index] - (mrp[found_index] * (discount[found_index] / 100.0));
                printf("Product Found! Brand: %s | MRP: Rs.%.2f | Discount: %.1f%% | Final Price: Rs.%.2f\n",
                       brand[found_index], mrp[found_index], discount[found_index], final_price);
                printf("Available Stock: %d\n", stock[found_index]);
                printf("Enter the Quantity of product: ");
                scanf("%d", &quantity);
                if (quantity > 0 && quantity <= stock[found_index]) {
                    printf("Quantity is Available\n");
                    stock[found_index] -= quantity;
                    printf("Remaining stock for ID %d: %d\n", id[found_index], stock[found_index]);
                    double total_bill = final_price * quantity;
                    grand_total += total_bill;
                    printf("Total cost for this item: Rs.%.2f\n", total_bill);
                } else {
                    printf("Quantity is not available or invalid!\n");
                }
            } else {
                printf("Enter a valid product ID (Product Not Found)\n");
            }
        }
        else if (choice == 3) {
            printf("\nYour final bill: Rs.%.2f\n", grand_total);
            printf("Thank you for shopping at DMART. Have a nice day!\n");
        }
    } while (choice != 3);
    return 0;
}
