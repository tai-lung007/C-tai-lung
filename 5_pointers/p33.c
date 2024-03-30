#include<stdio.h>
#include<stdlib.h>

int main(void)
{

        int **a,i,j,rows,cols;
        
        
        printf("enter the no of rows and cols :");
        scanf("%d%d",&rows,&cols);
        
        
        
        //allocate a 1d array of integer pointers
        a=(int **)malloc(rows*sizeof(int *));  //rh cv a[R][C]
        
        for(i=0;i<rows;i++)
        {
               printf("\n--------------------1111--------------------------------------\n");
               
               printf("address values of a[%d]  is %p   (this occupies 8 bytes)",i,&a[i]);
               //printf("",);
        
        }
         printf("\n-----------------------------2222-----------------------------\n");
        
        
        
        
        //allocate a 1d array of integers for each row pointer
        for(i=0;i<rows;i++)
        {
               a[i]=(int*)malloc(cols*sizeof(int));
        
        }
        
        for(i=0;i<rows;i++)
        {
        
                for(j=0;j<cols;j++)
                {
                      printf("enter a[%d][%d] : ",i,j);
                      scanf("%d",&a[i][j]);
        
       
                }        
        }
        
        
        for(i=0;i<rows;i++)
        {
               printf("\n--------------------------==--------------------------------\n");
               
               printf("address values of a[%d]  is %p \t",i,&a[i]);
               printf("address of (a+%d) %p\t",i,(a+i));
               printf("adrress stored in *(a+[%d] is %p\n)",i,*(a+i));
               //printf("",);
        
        }
         /* printf("\n-------------------------------444444444---------------------------\n");
         for(i=0;i<rows;i++)
        {
               //printf("\n----------------------------------------------------------\n");
               for(j=0;j<cols;j++)
               printf("address values of a[%d][%d]  is %p\n",i,j,&a[i]);
               //printf("",);
        
        }
         printf("\n-------------------------------55555555555555555---------------------------\n");
        */
         printf("\n----------------------------------------------------------\n");
         for(i=0;i<rows;i++)
        {
               //printf("\n----------------------------------------------------------\n");
               for(j=0;j<cols;j++)
               
               {
               printf("address values of  (*(a+[%d])+[%d]) is %p\t",i,j,(*(a+i)+j));
               printf("values of  *(*(a+[%d])+[%d]) is %d\n",i,j,*(*(a+i)+j));
               //printf("",);
               }
        }
         printf("\n-----------------------------------66666666666-----------------------\n");
        
        
        
        printf("the matrix is : \n");
        
        
        for(i=0;i<rows;i++)
        {
                 
                 for(j=0;j<cols;j++)
                 {
                        printf("%6d",a[i][j]);
                                             
                         
                 }
                 
                
        printf("\n");    
        
        }
        for(i=0;i<rows;i++)
        {
               //a[]=(int*)malloc(cols*sizeof(int));
               free(a[i]);
        
        }
        
        free(a);
        
        
       

return 0;
}
