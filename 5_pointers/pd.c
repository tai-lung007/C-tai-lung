#include<stdio.h>
#include<stdlib.h>

int main(void)

{

  //declaration and initialisation

  int i,rows,cols;
  
  int** a; //pointer to pointer to an integer 
  
  //number of rows and cols
  //cv rh
  //number of rows is equal to number of arrays 
  //number of cols equal elements in each row
  
  printf("enter the number of rows and cols ");
  scanf("%d %d",&rows,&cols);
  
  printf("&a address of a %p,address  vlaue stored in a is%p\n",&a,a);
  printf("---------------------------------------------------------------\n\n");
  
  //now we create an array of pointers that is equal to numbr of rows
  //these powers will then hols the address of powers which  point to ADDRESS which holdss the aCTUAL VALUES of ele     //ments
  for(i=0;i<rows;i++)
  {  //array of pointers 
     a=(int * *)malloc(rows *sizeof(int)); //size of elements in each row is allocated so each row is cap                                                     //able of holding an array  
  }
  for(i=0;i<rows;i++)
  {
    printf("\n &a   (address of a) %p  ,address stored in a  %p    ,       (a+%d)is %p  (8 bytes)    ,   *(a+i) is %p\n",&a,a,i,(a+i),*(a+i));
  
  }
  
  
  
  

















return 0;
}
