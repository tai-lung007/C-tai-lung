#include<stdio.h>
int main()
{
int arr[]={5,10,15,20,25};
int *ptr;
ptr=&arr[0];
printf("%d \n",*ptr);
//printf("%d \n",*ptr++);  //move frwd
//printf("%d \n",*ptr--); //garbage value or 32765//move backward


//printf("%d \n",*++ptr); //move frd
//printf("%d \n",++*ptr);//inc
//printf("%d \n",--*ptr); //dec
//printf("%d \n",(*ptr)++);//inc
printf("%d \n",(*ptr)--);
printf("%d \n",*ptr);



}
