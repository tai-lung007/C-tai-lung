#include<stdio.h>

int main()
{   
    /* int x=10;                   
       int *ptr=&x;  */
    
    /*printf("\n----------------------------------------------------\n");
    printf("1.x=  %d\n",x);
    printf("sizeee of x %ld  bytes\n",sizeof(x));  // siizeof    gives long doouble as output
    printf("addreess of xx %p \n",&x);
    printf("\n----------------------------------------------------\n");
    printf("2 address of x= %p \n",&x);
    printf("3 aaddress of x whhich is hooold in  ptr ==== %p  \n",ptr); //%p is uused to print the addresss 
    printf("sizzze off ptr %ld bytes",sizeof(ptr));
    printf("\n----------------------------------------------------\n");
    printf("4 ampesent ptr or *p , this is called derreferencing ======%d \n",*ptr);
    printf("size of *ptr %ld bytes \n",sizeof(*ptr) );
    printf("address of *p  %p \n",&(*ptr));
    printf("\n----------------------------------------------------\n");
    printf("5 address of ptr &ptr %p \n",&ptr);
    printf("6 address of pointer ==%p  \n",(void*)&ptr);
    printf("size of & ptr %ld bytes",sizeof(&ptr));
    printf("\n-----------------\n");
    */
    
    
   int a=5;
   int *p;
   p=&a;
   
   printf("value of p , this is address of a assigned to or reeferenced to pointer  p \n value of p = %p \n",p);
   printf("value of address of p  %p \n",&p);
   printf("================================================ \n");
   printf("value of p           =   %p \n",p);
   printf("value of p (preincre)=   %p \n",++p);
   printf("value of p (post incre)= %p \n",p++);
   printf("value of p =             %p \n",p);
   printf("value of p (predecre)=   %p \n",--p);
   printf("value of p (postdecre)=  %p \n",p--);
   printf("value of p =             %p \n",p);
   
   return 0;
  
}
