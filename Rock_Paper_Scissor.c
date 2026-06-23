#include <stdio.h>
#include <stdlib.h>
int main() {
    int player_Choice, computer_Choice;
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &player_Choice);
    computer_Choice = (rand() % 3) + 1;
    printf("Player choice");
    switch(player_Choice) {
        case 1: printf("Rock\n");
        break;
        case 2: printf("Paper\n"); 
        break;
        case 3: printf("Scissors\n");
        break;
        default: printf("Invalid choice!\n"); 
    }
    printf("Computer choice");
    switch(computer_Choice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }
    if (player_Choice == computer_Choice) {
        printf("Result: It's a draw!\n");
    } else if ((player_Choice == 1 && computer_Choice == 3) ||(player_Choice == 2 && computer_Choice == 1) || (player_Choice == 3 && computer_Choice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    return 0;
}
