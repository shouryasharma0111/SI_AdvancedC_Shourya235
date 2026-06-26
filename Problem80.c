#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL;
    struct Node *next = NULL;

        for (; head != NULL; head = next) {
        next = head->next;  
        head->next = prev;  
        prev = head;        
    }
    
    return prev; 
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void printList(struct Node* head) {
    for (struct Node* temp = head; temp != NULL; temp = temp->next) {
        printf("%d -> ", temp->data);
    }
    printf("NULL\n");
}

int main() {

    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);


    printf("Original List:\n");
    printList(head);

    
    head = reverseList(head);

    
    printf("\nReversed List:\n");
    printList(head);

    
    struct Node* nextNode;
    for (; head != NULL; head = nextNode) {
        nextNode = head->next;
        free(head);
    }

    return 0;
}
