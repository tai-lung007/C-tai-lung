#include<stdio.h>

//passs a pointr containg a functions as address as an argument

void func(char ,void(*fp)(float));
void func1(float);


int main(void)
{
  void (*p)(float);
  p=func1;
  
  printf("function main() called \n");
  func('a',p);return 0;
  
}
void func(char b,void(*fp)(float))
{
 
 printf("function func() called \n");
 (*fp)(6.6);

}
void func1(float f)
{
printf("function fun1() called \n");

}
