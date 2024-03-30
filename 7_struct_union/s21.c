#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next; // Pointer to the next node
};
int main() {
    struct Node *head = NULL;
printf("========================\n");

struct Node **head_mref=&head;

printf("========================\n");

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

printf("---PTR TO NEW NODE--CREATED---\n");



    new_node->data = 20;




printf("========================\n");


    return 0;
}

