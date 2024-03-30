#include<stdio.h>
#include<stdlib.h>
int main(void){
        int i,j,rows;
        int(*a)[4];
        printf("enter number of rows");
        scanf("%d",&rows);
        a=(int (*)[4])malloc(rows*sizeof(int[4]));//correct
        //expected expression before ‘[’ token 
        //(int(*)[4]) correct way of type casting an array type
              
        
        
        //a=(int (*)[4])malloc(rows*4*sizeof(int));//correct
        
        
        for(i=0;i<rows;i++)
        {
                for(j=0;j<4;j++)
                {
                
                
                printf("enter a[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
                                
                }
        
          
        }
        printf("the matrix is:\n");
        
        for(i=0;i<rows;i++)
        {
                for(j=0;j<4;j++)
                {
                
                
                printf("%5d:",a[i][j]);
             
                                
                }
        
          
        }
        
        







        return 0;
   }
