//array of pointers  

#include<stdio.h>

int main(void){


         int i,arr[4]={5,10,15,20};
         
         int *pa[4];
         for(i=0;i<4; i++)
         {
                    pa[i]=&arr[i];
         }
         
          for(i=0;i<4; i++)
         {
           
                 printf("value in pa[%d]= %p \t",i,pa[i]);
                 printf("dereference *pa[%d]= %d \n",i,*pa[i]);
         }
         
         
         
         
         
 return 0;        
}
