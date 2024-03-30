#include<stdio.h>
#include<stdlib.h>
int main(void){


        int*p,n,i;
        printf("enter the number of integers  to be entered :");
        scanf("%d",&n);
        
        p=(int *)malloc(n*sizeof(int));
        
        if(p==NULL)
        {
         printf("memory not available \n");
         exit(1);
        }        
        
        for(i=0;i<n;i++)
        {
             printf("enter an integer :");
             scanf("%d",p+i);
        
        
        }
        
        for(i=0;i<n;i++)
        {
             printf("%d \n",*(p+i));
             
        
        
        }
        free(p);
         
        if(p==NULL)
        {
         printf("memory not available \n");
         exit(1);
        }   
        printf("address of p %p\n",p);
        printf("*p value  %d\n",*p);
        //printf("*p value  %d\n",**p);//   
        /*  error: invalid type argument of unary ‘*’ (have ‘int’)
   42 |         printf("*p value  %d\n",**p);
   */






















return 0;

}
