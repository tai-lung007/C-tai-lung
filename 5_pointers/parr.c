#include<stdio.h>

int main(){

int arr[]={1,2,3,4,5};
int i;
//for(i=0;i<5;i++)
//{printf("%d \n ",arr[i]);}



int *ptr;
//ptr=&arr[0];
ptr=arr;
//arr[0]=*ptr;  //segmentation fault core dumped
/*printf("\n value pf *ptr is %d\n ",*ptr);
printf("value of ptr= address of arr %p",ptr);
printf("\nbase addreess of arr %p  \n ",&arr[0]);
printf("address of ptr %p \n",&ptr);
*/
int j=0;
/* 
for(j=0;j<5;j++)
{
//printf("\n value of %d ",*(ptr+j));
}  */

//while(j<5)
//{printf("%d \n ",*ptr++);j++;}

printf("*ptr++%d \n",*ptr++);
printf("*ptr  %d \n",*ptr);
printf("*ptr--%d \n",*ptr--);
printf("*ptr  %d \n",*ptr);
printf("*++ptr%d \n",*++ptr);
printf("*--ptr%d \n",*--ptr);

printf("address of ptr %p \n",&ptr);
printf("\nbase addreess of arr %p  \n ",&arr[0]);
printf("value of ptr %p \n",ptr);
printf("value of ++ptr %p \n",++ptr);

printf("++*ptr %d \n",++*ptr);

return 0;
}
