#include<stdio.h>
float add(int, float);
//float result;

int main(void)
{

  float (*fp)(int,float);
  float result;
  
  fp=add;
  
  result=add(5,7.7);
  printf("call by value=%f\n",result);
  
  
  result=(*fp)(5,6.6);
  printf("call by reference%f\n",result);
  
  printf("(*fp)(1,3.3) =%f\n",(*fp)(1,3.3));
  
  
  printf("---------------------------------------\n");
  
  
  printf("address of main is %p\n",main);
  printf("address of add funct= %p\n",add);
  printf("Address of fp is %p\n", (void *)fp);

  printf("------------------------------------------\n");
  
  printf("address of dp variable is  %p\n",&fp);
  printf("value in fp variable is  %p\n",fp);
  printf("value derefernce *fp is %f\n",(*fp)(77,5.5));
  //printf("",(fp+1));
  //printf("",*(fp+1));
  
  return 0;
  
}

float add(int a,float b)
{

return (a+b);

}
