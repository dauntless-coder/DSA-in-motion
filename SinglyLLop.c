#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to count the number of nodes in the list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Function to reverse the direction of links in the list
void reverseList(struct Node** head_ref) {
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

// Function to delete alternate nodes (first, third, fifth, etc.)
void deleteAlternateNodes(struct Node* head) {
    if (head == NULL) return;

    struct Node* current = head;
    struct Node* next_next;

    while (current != NULL && current->next != NULL) {
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
        current = next_next;
    }
}

// Function to push a new node at the beginning of the list
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Create a list: 1->2->3->4->5->NULL
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printf("Original list: ");
    printList(head);

    printf("Number of nodes: %d\n", countNodes(head));

    reverseList(&head);
    printf("Reversed list: ");
    printList(head);

    deleteAlternateNodes(head);
    printf("List after deleting alternate nodes: ");
    printList(head);

    return 0;
}