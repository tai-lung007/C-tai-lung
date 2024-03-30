//access dynamically allocated memory as 1d array
#include<stdio.h>
#include<stdlib.h>


int main(void){
        
        int i, n,k;
        int (*p)[4];
        printf("address of a[0]IS %p\n",p[0]); //address of a[0]IS (nil)
        printf("entera the number of integers to be entered into an array \n");
        k=scanf("%d",&n);
       // p=(int *[n])malloc(n*sizeof(int[n]));
       p = (int (*)[k])malloc(n * sizeof(int[k])); 
       
       
       
        printf("address of a[0]IS %p\n",p[0]);
        printf("address stored in (p+0)IS %p\n",(p+0)); 
        printf("-------------------------------");
        
        
        
        
        for(i=0;i<k;i++){
        //printf("enter the a[%d]-",i);
        //scanf("enter the a[%d]===> %d",i,*(p+i)); 
         printf("Enter the a[%d]: ", i);
         scanf("%d", &(*p)[i]);
         printf("\n");
        
        }
        
        
        
        
        for(i=0;i<k;i++){
        //printf("enter the a[%d]-",i);
        //scanf("enter the a[%d]===> %d",i,(p+i));
        //printf("address of a[%d] iS %p\n",i,p[i]);
        //printf("value of a[%d]  is %d",i,*(p+i));      
        printf("Value of a[%d] is %d\n", i, (*p)[i]); 
         }
       

return 0;
}
