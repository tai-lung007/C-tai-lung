//self referential structures
#include <stdio.h>
#include<stdlib.h>

// Define a structure called Node
struct Node {
    int data;          // Data part of the node
    struct Node *next; // Pointer to the next Node
};

int main() {
    // Create two nodes
    struct Node firstNode;
//    printf("address of firstnode: %p\n",&firstNode);
    printf("address of firstnode.data: %p\n",&firstNode.data);
    printf("ivalue in a: %p\n",firstNode);

    
    printf("first node.data=%d\n",firstNode.data);
    printf("first node-next=%p\n",firstNode.next);

printf("-------------------------\n");
    struct Node secondNode;
  //  printf("address of secondnode: %p\n",&secondNode);
    printf("address of secondnode.data: %p\n",&secondNode.data);
    printf("second node.data=%d\n",secondNode.data);
    printf("second  node-next=%p\n",secondNode.next);
printf("-++++++++++++++++++++++++++++++++++++++++++++++-\n");


    // Assign data to the nodes
    firstNode.data = 10;
    //printf("+++\n+\naddress of firstnode: %p\n",&firstNode);
    printf("address of firstnode.data: %p\n",&firstNode.data);
    printf("firstnode===>>>: %p\n",firstNode);
    printf("first node.data=%d\n",firstNode.data);
    printf("first node-next=%p\n",firstNode.next);
    printf("&first node-next=%p\n",&firstNode.next);
printf("-------------------------\n");
    secondNode.data = 20;
   // printf("address of secondnode: %p\n",&secondNode);
    printf("address of secondnode.data: %p\n",&secondNode.data);
    printf("second node.data=%d\n",secondNode.data);
    printf("second  node-next=%p\n",secondNode.next);
    printf("&second  node-next=%p\n",&secondNode.next);
  printf("===============================================\n");
    // Link the nodes together
    firstNode.next = &secondNode;
    secondNode.next = NULL;

    // Access data and next pointer of the first node
    printf("Data in the first node: %d\n", firstNode.data);
    printf("Next pointer of the first node: %p\n", (void *)firstNode.next);

    // Access data and next pointer of the second node
    printf("Data in the second node: %d\n", secondNode.data);
    printf("Next pointer of the second node: %p\n", (void *)secondNode.next);
    printf("===============================\nNEW NODE\n");

struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    printf("&newnode= %p\n",&newNode);
    printf("newnODE= %p\n",newNode);
printf("===========================\n");
   if(newNode==NULL)
   {  printf("newnode memory allocation failed , new node is not created.\n");

       return 1;}

  newNode->data=30;
   secondNode.next=&newNode;
   newNode->next=NULL;

   printf("address of newNode: %p\n",&newNode);
   printf(" newNode=====>: %p\n",newNode);
   printf("data in newNode.data-=%d\n",newNode->data);
   printf("address of  newNode.data-=%p\n",&newNode->data);

   printf("address of newNode.nxt:%p\n",&newNode->next);
   printf("address pointed newnonode.nxt:%p\n",newNode->next);

    return 0;
}

