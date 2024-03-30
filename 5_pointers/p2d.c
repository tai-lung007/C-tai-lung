#include<stdio.h>
int main()
{
   int  arr[3][4]={
   
   
                  {01,02,03,04},
                  {11,12,13,14},
                  {21,22,23,24}  
   
   
                      };

int i,j;
for(i=0;i<3;i++)
{

        printf("address of %d th array= %p %p \n ",i,arr[i],*(arr+i));
        for(j=0;j<4;j++)
        {
          printf("%i  --------  %d \n ",arr[i][j],*(*(arr+i)+j));
        }


}

return 0;
}
