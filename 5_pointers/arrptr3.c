//array of pointers 

#include<stdio.h>

int main()
{

        int i,j;
        int* pa[3];
        int arr[3][4]={
        
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
                
        };
        /*
        
        printf("---------------arr[][]------------\n");
        
         printf("address of arr[0][0]=%p \n",&arr[0][0]);
         printf("address of arr[0][1]=%p \n",&arr[0][1]);
         printf("address of arr[0][2]=%p \n",&arr[0][2]);
         printf("address of arr[0][3]=%p \n",&arr[0][3]);
         //printf("address of arr[0][4]=(%p) \n",&arr[0][4]);
         printf("-----------++-------------\n");
         printf("address of arr[1][0]=%p \n",&arr[1][0]);
         printf("address of arr[1][1]=%p \n",&arr[1][1]);
         printf("address of arr[1][2]=%p \n",&arr[1][2]);
         printf("address of arr[1][3]=%p \n",&arr[1][3]);
         //printf("address of arr[1][4]=(%p) \n",&arr[1][4]);
                  printf("-----------++-------------\n");
         printf("address of arr[2][0]=%p \n",&arr[2][0]);
         printf("address of arr[2][1]=%p \n",&arr[2][1]);
         printf("address of arr[2][2]=%p \n",&arr[2][2]);
         printf("address of arr[2][3]=%p \n",&arr[2][3]);
         printf("address of arr[2][4]=(%p) \n",&arr[2][4]);
                  printf("-----------++-------------\n");  */
         /*printf("address of arr[3][0]=(%p) \n",&arr[1][0]);
         printf("address of arr[3][1]=%p) \n",&arr[1][1]);
         printf("address of arr[3][2]=%p )\n",&arr[1][2]);
         printf("address of arr[3][3]=%p )\n",&arr[1][3]);
         printf("address of arr[3][4]=%p) \n",&arr[1][4]);       
                  printf("-----------++-------------\n");
         printf("address of arr[4][0]=%p )\n",&arr[1][0]);
         printf("address of arr[4[1]=%p )\n",&arr[1][1]);
         printf("address of arr[4][2]=%p) \n",&arr[1][2]);
         printf("address of arr[4][3]=%p )\n",&arr[1][3]);
         printf("address of arr[4][4]=%p) \n",&arr[1][4]); 
         
        */
         //printf("--------address of arr[][]-------------------\n");
        
        /*
        for(i=0;i<3;i++)
         {
              for(j=0;j<4;j++)
              {printf("%d \t \n",arr[i][j]);  
              printf("address of arr[%d][%d]=%p\n",i,j,&arr[i][j]);
              printf("_____________________\n");
              }
              printf("\n");
         
         } */
         
         
         printf("---------------------------\n");
         
         for(i=0;i<3;i++)
         {
              pa[i]=arr[i];  
         
         }

           printf("---------------------------\n");
        
         for(i=0;i<3;i++)
         {
              for(j=0;j<4;j++)
              {
              printf("value of arr[%d][%d]=%d\t---",i,j,arr[i][j]);
              printf("pa[%d][%d]==%d\t----",i,j,pa[i][j]);  
              printf("*(*(pa+%d)+%d)==%d\t----\n",i,j,*(*(pa+i)+j));
              //printf("",);
              printf("\taddress of arr[%d][%d]=%p\t---",i,j,&arr[i][j]);
              
              printf("address of *(*(pa+%d)+%d)==%p\t",i,j,(*(pa+i)+j));
              //printf("pa is =  %p \t",pa);
             
              printf("&pa[%d][%d] is =  %p \n\n",i,j,&pa[i][j]);
             
              }
              printf("---+++++___________+++++++++--------\n\n");
         
         }
         
         

  printf("---------------------------\n");
  for(i=0;i<3;i++)
  {
    printf("pa[%d] is %p\n",i,pa[i]);
  }

return 0;
}
