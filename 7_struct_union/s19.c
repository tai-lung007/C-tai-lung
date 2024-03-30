#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node *next; // Pointer to the next node
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node **head_ref, int new_data) {
    // Allocate memory for new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Assign data to the new node
    new_node->data = new_data;

    // Set the next pointer of the new node to point to the current head
    new_node->next = *head_ref;

    // Set the head to point to the new node
    *head_ref = new_node;
}

// Function to delete a node with a given key from the linked list
void deleteNode(struct Node **head_ref, int key) {
    // Store head node
    struct Node *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Changed head
        free(temp);             // Free old head
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in the linked list
    if (temp == NULL) {
        printf("Key not found in the linked list!\n");
        return;
    }

    // Unlink the node from linked list
    prev->next = temp->next;

    // Free the memory of the node
    free(temp);
}

// Function to print the linked list
void printList(struct Node *node) {
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node *head = NULL;

    // Insert some elements at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Print the initial linked list
    printf("After insertions:\n");
    printList(head);

    // Delete a node
    deleteNode(&head, 2);

    // Print the linked list after deletion
    printf("After deletion:\n");
    printList(head);

    // Free memory allocated for the linked list nodes
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

