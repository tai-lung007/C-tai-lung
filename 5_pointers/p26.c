//dereferencing a void pointer

#include<stdio.h>

int main(void )
{
   int a=3; //dec and initialisation
   float b=3.4,*fp=&b;  //fp=&b;
   void *vp; //dec 
   vp=&a;  //referencing or addressing
   
   printf("value of a =%d \n",*(int *)vp);
   *(int *)vp=12;
   printf("value of a =%d \n",*(int *)vp);
   vp=fp;
   printf("value of b=%f \n",*(float *)vp);
   



return 0;
}
