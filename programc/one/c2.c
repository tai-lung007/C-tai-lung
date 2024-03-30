#include <stdio.h>
#include <stdlib.h>

// Define the structure using typedef
typedef struct Node {
    char *data;
    struct Node *next;
} *nodeptr;

int main() {
    // Create a new node
    nodeptr newNode = (nodeptr)malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with error
    }

    // Assign data to the node
    newNode->data = "Hello, World!";
    newNode->next = NULL;

    // Display the addresses and values stored in the node
    printf("Address of newNode:      %p\n", (void *)&newNode);
    printf("Address of newNode:      %p\n", (void *)newNode);
    printf("Value of newNode->data:  %s\n", newNode->data);
    printf("Address of newNode->data %p\n", (void *)(&(newNode->data)));
    printf("Value of newNode->next:  %p\n", (void *)newNode->next);

    printf("adddress  of newNode->next:  %p\n", (void *)&newNode->next);
    // Free the allocated memory
    free(newNode);

    return 0; // Exit success
}

