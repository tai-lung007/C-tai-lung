#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int a;
  struct Node* self;
};
int main(void)
{
struct Node* head=(struct Node *) malloc(sizeof(struct Node));

    printf("head is a  pointer to struct Node\n");
    printf("&head\t%p\n",&head);
    printf(" head\t%p\n",head);
    printf(" *head\t%p\n",*head);

    printf("========================\n");
    if(head->a== NULL);
    printf("the elements in struct node is still NULL\n");
    printf("head->a  %d\n",head->a);
    printf("&(head->a)  %p\n",(void *)&(head->a));

    head->a=10;
    printf(" *head\t%d\n",*head);


    if(head->self==NULL)
        printf("self not pointing\n");
    printf("head->self  %p\n",head->self);
    printf("&(head->self)  %p\n",(void *)&(head->self));
    

return 0;
}
