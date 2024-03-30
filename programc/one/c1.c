#include <stdio.h>
#include <stdlib.h>

// Define the struct for the linked list node
typedef struct Node {
    char *data;
    struct Node *next;
} *nodeptr;

int main() {
    
    printf("address of nodeptr: %p\n",*nodeptr);
    printf("address of data : %p\n",*nodeptr.data);
    // Create a linked list node
    nodeptr head = (nodeptr)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign data to the node
    head->data = "Hello, World!";
    head->next = NULL;

    // Print the data stored in the node
    printf("Data stored in the node: %s\n", head->data);

    // Free allocated memory
    free(head);

    return 0;
}

