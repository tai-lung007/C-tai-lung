/*  #include<stdio.h>


int main()
{
     // dereference a pointer to an array
     
    int arr[5]={3,5,7,9,11};
    printf("%p \n",arr); //arr means its address
    //arr++;//l value required
    printf("%p \n",&arr); // it is evident now 
    int i;
    
    for(i=0;i<5;i++)
    printf("%d ===>whose add of arr[%d]==>%p\n",arr[i],i,&arr[i]);
    
    int *p=arr;        // pointed to an integer
    int (*ptr)[5]=&arr;   //  pointed to an whole array
    
    for(i=0;i<5;i++){
    
    printf("(4 byte arr address  arr[%d]) p--->%p, *p-->%d, &p--->%p \n",i,p,*p,&p);
        //printf("%p,%d,%p \n ",p,*p,&p);
    p++;
    
    
  
    }
    
    //now ptr
    for(i=0;i<5;i++){
    
    printf("(20 bytes space )ptr--> %p, *ptr-->%p,**ptr-->%d \t\t,&ptr--->%p \n",ptr,*ptr, **ptr,&ptr);
    ptr++;
   
    }

} */



#include<stdio.h>
int main(void){



        int arr[5]={3,5,7,9,11};
        int *p=arr; //points to base address that is first element of array
        int (*ptr)[5]=&arr;// points to whole array
        int i;
        
        
        printf("value of p=%p, value of ptr=%p \n",p,ptr);
        printf("address of p=%p, address of ptr=%p\n ",&p,&ptr);
        
        printf("value of *p-->%d\n,value of *ptr-->%p \n, value of **ptr=--->%d \n",*p,*ptr,**ptr);
        
        printf("sizeof p -->%ld \n,sizeof *p-->%ld\n, sizeof ptr-->%ld \n,sizeof *ptr-->%ld\n,sizeof **ptr-->%ld\n",sizeof(p),sizeof(*p),sizeof(ptr),sizeof(*ptr),sizeof(**ptr));
        
        /*
        value of p=0x7ffe841262a0, value of ptr=0x7ffe841262a0 
address of p=0x7ffe84126290, address of ptr=0x7ffe84126298
 value of *p-->3
,value of *ptr-->0x7ffe841262a0 
, value of **ptr=--->3 
sizeof p -->8 
,sizeof *p-->4
, sizeof ptr-->8 
,sizeof *ptr-->20
        
,sizeof **ptr-->4

        
        
        */
        
        
        
        
        
        
        
        
        
        //p++;
        //ptr++;
        //printf("p=%p, ptr=%p \n",p,ptr);
        /*for(i=0;i<5;i++){        printf("arr[%d] address is ==> %p \n ",i,&arr[i]);}
        
        printf("*p value-->%d,address of ptr--> %p,vaue of *ptr-->%p ,address of arr[0] %p\n ",*p,&ptr,*ptr,&arr);*/








}
