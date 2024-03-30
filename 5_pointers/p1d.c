//pointers and 1 d arrays

#include<stdio.h>
int main(void){

   int arr[5]={5,10,15,20,25};
   int i,*p;
   p=arr;// if this is not referenced segmentation fault(core dumped occurs)
   for (i=0;i<5;i++)
   {
   
   
       /*printf("value of arr[%d]=%d --------------->\t",i,arr[i]);
           printf("address of arr[%d]=%p  \n",i,&arr[i]);
         */
   
   
                  printf("value of arr[%d]=%d \t",i,*(arr+i));
                printf("address of arr[%d]=%p \n",i, arr+i);  
        
        //printf("address of arr[%d]=%p %p %p %p \t-------------->",i,&arr[i],arr+i, p+i, &p[i]);
        //printf("value of arr[%d]=%d %d %d %d \n",i,arr[i],*(arr+i),*(p+i),p[i]);
        
        
   }

return 0;
}
