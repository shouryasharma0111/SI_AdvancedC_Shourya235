#include <stdio.h>
int main() {
    int choice;
    int a;
    float b;
    char c;
    printf("Enter anyrthing:\n");
    printf("1. Integer\n2. Float\n3. Character\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &a);
            printf("You entered integer: %d\n", a);
            break;
        case 2:
            printf("Enter a float: ");
            scanf("%f", &b);
            printf("You entered float: %.2f\n", b);
            break;
        case 3:
            printf("Enter a character: ");
            scanf(" %c", &c); // space before %c to consume newline
            printf("You entered character: %c\n", c);
            break;
        default:
            printf("Invalid choice. Try again.\n");
    }
    return 0;
}
