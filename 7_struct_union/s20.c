#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next; // Pointer to the next node
};
int main() {
    struct Node *head = NULL;
printf("========================\n");
printf("%p--&head    head is variable that points to struct Node %p\n",&head,head);
printf("%p--head->data\n",&head->data);
printf("%p--head->next\n",&head->next);

struct Node **head_mref=&head;

printf("%p--&head_mref \n",&head_mref);
printf("%p-- head_mref  \n",head_mref);
printf("%p--*head_mref \n,",*head_mref);
//printf(" %p--**head_mref\n,",**head_mref);//segmentation fault 
printf("========================\n");

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

printf("---PTR TO NEW NODE--CREATED---\n");


  //     printf("%p--&new_node\n",&new_node);
       printf("%p--new_node \n",new_node);
//       printf("%d--new_node \n",new_node);
      // printf("%p--*new_node\n",(void *)*new_node);
    //   printf("%d--*new_node\n",*new_node);
       printf("---point to note new node is ptr to struct Node--\n");
      // printf("%p--**new_node\n",**new_node);
       printf("%d-- new_node->data\n",new_node->data);
       printf("%p-- &new_node->data\n",(void *)&new_node->data);
       printf("%p-- new_node->next\n",new_node->next);

    new_node->data = 20;

       printf("%d-- new_node->data\n",new_node->data);
       printf("%p-- &new_node->data\n",(void *)&new_node->data);



printf("========================\n");

    struct Node *temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

