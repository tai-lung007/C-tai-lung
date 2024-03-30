//functions address as argument to other function

#include<stdio.h>
void func(char, void(*fp)(float));
void func1(float);

int main(void)
{
  printf("function main?() called: address =%p\n",main);
  printf("Memory allocated for main: %zu bytes\n", sizeof(main));
  func('a',func1);
  return 0;
 
}

void func(char b, void(*fp)(float c))
{

        printf("function func() called ,address id %p\n",func);
        printf("Memory allocated for func: %zu bytes\n", sizeof(func));
        (*fp)(6.7);
        printf("Distance between func and func1: %zu bytes\n", (size_t)((char*)func1 - (char*)func));


}

void func1(float f)
{

printf("function func1() called, address is= %p\n",func1);
printf("Memory allocated for func1: %zu bytes\n", sizeof(func1));


}
