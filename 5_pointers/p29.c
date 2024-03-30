//realloc() function
#include<stdio.h>
#include<stdlib.h>
int main(void){
        int i ,*ptr;
        ptr=(int *)malloc(5*sizeof(int));//dma 5
        if(ptr==NULL)
        {
        
        printf("memory is not available");
        }
        for(i=0;i<5;i++)
        {
         *(ptr+i)=i*2;
         printf("%d ,address of (ptr+%d)=%p \n",*(ptr+i),i,(ptr+i));
         }
         
         //free(ptr);
         //free(): double free detected in tcache 2
        //Aborted (core dumped)
         ptr=(int *)realloc(ptr,9*sizeof(int));
         
        
        
        if(ptr==NULL)
        {
        printf("MEWMORY NOT AVAILAB;LE");
        }
        
        
        for(i=0;i<9;i++)
        {
          *(ptr+i)=i*10; //0 10 20 30 40 50 60 70 80
        
        }
        for(i=0;i<9;i++)
        {
          printf("value of %d, address of (ptr+%d)  is  %p \n",*(ptr+i),i,(ptr+i));
        }
return 0;
}
