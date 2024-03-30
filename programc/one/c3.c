#include<stdio.h>

struct list
{
 int x;
 struct list* next;
}*head;

int main()
{

struct list record;
head=&record;

head->x=10;
head->next=NULL;


printf("address of record :      %p\n",&record);
printf("address  of x is   %p\n",&(head->x));
printf("address of head :        %p\n",&head);
printf("address stored in head:  %p\n",head);
printf("------------------------------\n");
printf("value of x is   %d\n",head->x);
printf("addval in next  %p\n", head->next);

return 0;
}
