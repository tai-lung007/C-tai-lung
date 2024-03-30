#include<stdio.h>
int main()
{

//difference btw pointer to an integer and pointer to pointer

int *p; //can point to an integer 
int (*ptr)[5];  //can point to an array of integers'
int arr[5];

p=arr;
ptr=&arr;

printf("p =%p , ptr= %p \n",p,ptr);// prints the address that is stored in poionter variables
printf("-----------------------\n");
p++;
ptr++;
printf("p =%p , ptr= %p \n",p,ptr);
printf("size of ptr %ld \n",sizeof(ptr));//8 bytes
printf("size of p %ld \n",sizeof(p));//8 bytes
printf("size of arr %ld \n ",sizeof(arr));//20bytes  is equal to 0x14

printf("-----------------------\n");
p++;
ptr++;
printf("p =%p , ptr= %p \n",p,ptr);
printf("size of ptr %ld \n",sizeof(ptr));
printf("size of p %ld \n",sizeof(p));
printf("-----------------------\n");
p++;
ptr++;
printf("p =%p , ptr= %p \n",p,ptr);
printf("size of ptr %ld \n",sizeof(ptr));
printf("size of p %ld \n",sizeof(p));

printf("--------------------------\n");
return 0;

}
