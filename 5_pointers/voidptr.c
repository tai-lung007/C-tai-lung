#include<stdio.h>
int main()
{

  int num=15;
  float fnum=3.14;
  char ch='A';
  
  void *ptr;
  
  
  ptr=&num;
  printf("value of %d \n",*((int*)ptr));
  printf("========\n");
  ptr=&fnum;
  printf("value of  %.3f\n ",*((float *)ptr));
  printf("========\n");
  ptr=&ch;
  printf("value of %c \n ",*((char *)ptr));
  printf("========\n");
  
  

return 0;
}
