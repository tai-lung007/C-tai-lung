#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

int main(void)
{
    struct Node* head = (struct Node *) malloc(sizeof(struct Node));
    
    printf("----------------------------------\n");
    printf("&head\t%p\n", (void *)&head); 
    printf("head\t%p\n", (void *)head);  
    printf("----------------------------------\n");
    
   printf("head->data -   %d\n",head->data);
   printf("&(head->data - %p\n",(void *)&(head->data));
    printf("----------------------------------\n");
   printf("head->link - %p\n",head->link);
//   printf("&(head->link - %p\n",(void *)&(head->link));
    printf("----------------------------------\n");
    
   head->data=45;
   head->link=NULL;

    printf("----------------------------------\n");
   printf("head->data -   %d\n",head->data);
   printf("&(head->data - %p\n",(void *)&(head->data));
    printf("----------------------------------\n");
   printf("head->link - %p\n",head->link);
  // printf("&(head->link - %p\n",(void *)&(head->link));
    printf("--=========================================--\n");
/*
    head=malloc(sizeof(struct Node));
    head->data=98;
    head->link=NULL;
    printf("----------------------------------\n");
   printf("head->data -   %d\n",head->data);
   printf("&(head->data - %p\n",(void *)&(head->data));
    printf("----------------------------------\n");
   printf("head->link - %p\n",head->link);
   //printf("&(head->link - %p\n",(void *)&(head->link));
    printf("--=========================================--\n");
    oo

  */

    printf("--=========================================--\n");
    printf("--=========================================--\n");
struct Node* current= malloc(sizeof(struct Node)) ;   


printf("heAd->link    : %p\n",head->link);
current->data=98;
current->link=NULL;
head->link=current;

printf("current->data : %d\n",current->data);
printf("(current - %p\n",(current));
printf("&(current - %p\n",(void *)&(current));
printf("&(current->data) - %p\n",(void *)&(current->data));
printf("current->link : %p\n",current->link);
printf("heAd->link    : %p\n",head->link);



    printf("--=========================================--\n");


struct Node* current2= malloc(sizeof(struct Node)) ;   


printf("heAd->link    : %p\n",head->link);
current2->data=98;
current2->link=NULL;
current->link=current2;

printf("current2->data : %d\n",current2->data);
printf("(current2 - %p\n",(current2));
printf("&(current2 - %p\n",(void *)&(current2));
printf("&(current2->data) - %p\n",(void *)&(current2->data));
printf("current2->link : %p\n",current2->link);
printf("current->link    : %p\n",current->link);



    printf("--=========================================--\n");


    printf("--=========================================--\n");
    printf("--=========================================--\n");

printf("%p  head\n",head);
printf("%p  head-link\n",head->link);
printf("%p  head->link->link\n",head->link->link);
printf("%p \t \thead->link->link->link\n",head->link->link->link);


    printf("--=========================================--\n");
    struct Node* ptr=NULL;
    ptr=head;
int count=0;

    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;

    }
    printf("count %d\n",count);
    printf("--=========================================--\n");

return 0;
}
