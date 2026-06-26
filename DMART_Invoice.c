#include <stdio.h>
struct Product {
    int id;
    int stock;
    double mrp;
    double discount; 
    char brand[30];  
};
int main() {
    struct Product inventory[10] = {
        {100, 10,  160000.00,  10.0, "Samsung"},
        {101, 10,  230000.00,   15.0, "Apple"},
        {102, 15,  95000.00,  15.0,  "One Plus"},
        {103, 12,  150000.00,   20.0, "Motorola"},
        {104, 5,   2100000.00, 5.0,  "VERTU Signature"},
        {105, 16,  100000.00,  10.0, "Google"},
        {106, 13,  68000.00,  25.0, "Realme"},
        {107, 12,  160000.00, 8.0,  "Vivo"},
        {109, 10,  180000.00, 15.0, "OPPO"},
        {110, 11,  90000.00,  5.0,  "Xiaomi"}
    };
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
                       inventory[i].id, 
                       inventory[i].brand, 
                       inventory[i].mrp, 
                       inventory[i].discount, 
                       inventory[i].stock);
            }
        }
        else if (choice == 2) {
            int PI, quantity, found_index = -1; 
            printf("Enter the product ID: ");
            scanf("%d", &PI);
            for (i = 0; i < 10; i++) {
                if (PI == inventory[i].id) { 
                    found_index = i; 
                    break; 
                }
            }
            if (found_index != -1) {
                double original_mrp = inventory[found_index].mrp;
                double discount_pct = inventory[found_index].discount;
                double final_price = original_mrp - (original_mrp * (discount_pct / 100.0));
                printf("Product Found! Brand: %s | MRP: Rs.%.2f | Discount: %.1f%% | Final Price: Rs.%.2f\n", 
                       inventory[found_index].brand, original_mrp, discount_pct, final_price);
                printf("Available Stock: %d\n", inventory[found_index].stock);
                printf("Enter the Quantity of product: ");
                scanf("%d", &quantity);   
                if (quantity > 0 && quantity <= inventory[found_index].stock) {
                    printf("Quantity is Available\n");
                    inventory[found_index].stock -= quantity;
                    printf("Remaining stock for ID %d: %d\n", 
                           inventory[found_index].id, inventory[found_index].stock);
                    double total_bill = final_price * quantity;
                    grand_total += total_bill;   
                    printf("Total cost for this item: Rs.%.2f\n", total_bill);
                } 
                else {
                    printf("Quantity is not available or invalid!\n");
                }
            } 
            else {
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