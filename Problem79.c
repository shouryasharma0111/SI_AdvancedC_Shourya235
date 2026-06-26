#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};


bool detectLoop(struct Node* head) {
    struct Node* slow = head;
    
    
    for (struct Node* fast = head; fast != NULL && fast->next != NULL; fast = fast->next->next) {
        slow = slow->next; 

        if (slow == fast) {
            return true; 
        }
    }
    return false;}

struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = head->next;

    if (detectLoop(head))
        printf("Loop detected in the linked list.\n");
    else
        printf("No loop detected.\n");

    return 0;
}
