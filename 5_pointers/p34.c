//pointers to functions
#include<stdio.h>
void func1();
int main(void)
{

       printf("Address of main function is == %p\n",main);//Address of main function is == 0x55c99ee6c149
       printf("Address of func1 is=====%p \n",func1); //Address of func1 is=====0x55c99ee6c194 
       
       

        return 0;
}
void func1()
{

printf("pointers are soul of c");

}
