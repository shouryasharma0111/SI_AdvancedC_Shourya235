#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* findMiddle(struct ListNode* head) {
    int length = 0;
    
  
    for (struct ListNode* curr = head; curr != NULL; curr = curr->next) {
        length++;
    }
    
  
    struct ListNode* curr = head;
    for (int i = 0; i < length / 2; i++) {
        curr = curr->next;
    }
    
    return curr;
}

void append(struct ListNode** head_ref, int new_data) {
    struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
    new_node->val = new_data;
    new_node->next = NULL;
    
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    struct ListNode* last = *head_ref;
    for (; last->next != NULL; last = last->next);
    last->next = new_node;
}

int main() {
    struct ListNode* head = NULL;
    
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    
    struct ListNode* middle = findMiddle(head);
    
    if (middle != NULL) {
        printf("The middle element is: %d\n", middle->val);
    }
    
    return 0;
}
