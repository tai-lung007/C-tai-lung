#include<stdio.h>

int main()
{

   int arr[5] = {1, 2, 3, 4, 5};
   int *ptr = arr; // Points to the first element of arr
   /* printf("%d \n",*ptr);
   ptr++; // Moves ptr to the next element
    printf("%d \n ",*ptr);
    printf("======================");  */
   while(*ptr!='\0')
   {
      printf("%d  \n",*ptr);
      ptr++;
   
   }

}
