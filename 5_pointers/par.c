#include<stdio.h>
int main(void){

//pointer arithmetic 


       char a='x',*p1=&a; 
       int b=12,*p2=&b;
       float c=12.4,*p3=&c;
       double d=18.34,*p4=&d;
       
       printf("-----------------------------------------------------------\n");
       
       printf("sizeof(p1)=%lu,  sizeof(*p1)=%lu\n",sizeof(p1),sizeof(*p1));
       printf("sizeof(p2)=%lu,  sizeof(*p2)=%lu\n",sizeof(p2),sizeof(*p2));
       printf("sizeof(p3)=%lu,  sizeof(*p3)=%lu\n",sizeof(p3),sizeof(*p3));
       printf("sizeof(p4)=%lu,  sizeof(*p4)=%lu\n",sizeof(p4),sizeof(*p4));
       printf("-----------------------------------------------------------\n");
       
       
       
       
       printf("address of p1  =  %p \n",p1);
       printf("address of p2  =  %p \n",p2);
       printf("address of p3  =  %p \n",p3);
       printf("address of p4  =  %p \n",p4);
       
       printf("================================================================\n");
       
       p1++;
       p2++;
       p3++;
       p4++;
       printf("===================================================================\n");
       
       printf("address of p1  =  %p \n",p1);
       printf("address of p2  =  %p \n",p2);
       printf("address of p3  =  %p \n",p3);
       printf("address of p4  =  %p \n",p4);
       
       return 0;


}
