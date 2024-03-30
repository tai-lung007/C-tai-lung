#include<stdio.h>
#include<stdlib.h>

int main(void){


        //dynamically allocate  a2d array using array of pointers 
        
        int *a[3],i,j,cols;
        printf("enter number of columns :");
        scanf("%d",&cols);
        
        
        //initialise each pointer in array by address of dynamically  allocated memory
        for(i=0;i<3;i++)
         a[i]=(int *)malloc(cols*sizeof(int));
         
         
         
         
        for(i=0;i<3;i++)
        {
         for(j=0;j<cols;j++)
         {
            printf("enter value for a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
         }
        
        }        
        printf("the matrix ois \n");
        for(i=0;i<3;i++)
        {
         for(j=0;j<cols;j++)
         
         {
                
            printf("a[%d][%d]-->%2d |",i,j ,a[i][j]);
            
         }
         printf("\n---------------------------------------------\n");
        
        }        
        
        













return 0;
}
