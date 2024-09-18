#include <stdio.h>
#include <malloc.h>
struct Node {
    int data;
    struct Node* next;
};
void initialize(struct Node** head_ref) {
    *head_ref = NULL;
};
void InsertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_data = malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node-> *head_ref;
    *head_ref = new_node;
};

int main() {
    struct Node* head = NULL;
    initialize(&head);

    InsertAtBeginning(&head, 10); 
    InsertAtBeginning(&head, 20); 
};