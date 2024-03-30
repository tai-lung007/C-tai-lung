#include<stdio.h>

void func(int a[]);
int main(void){

        int i,arr[5]={3,6,2,7,1},barr[5]={1,2,3,4,5};
        printf("---------------FUNC CALLING-------------------------------\n");
        printf("func arr as argument \n");
        func(arr);
        
        printf("func barr as argument \n");
        func(barr);
        
        printf("---------------MAIN-------------------------------\n");
        printf("inside main() ::  \n");
        for(i=0;i<5;i++)
        {
           printf("arr [%d]===%d  \n",i,arr[i]);
           printf("address of arr[%d]--->%p \n",i,&arr[i]);
                
        }
        printf("\n");
        for(i=0;i<5;i++)
        {
           printf("arr [%d]===%d  \n",i,barr[i]);
           printf("address of barr[%d]--->%p \n",i,&barr[i]);
                
        }
        return 0;

}



void func(int a[]){


 int i;
 printf("inside func  ::\n");
 
 
 for(i=0;i<5;i++)
        {
                a[i]=a[i]+2;
           printf("a[%d]=====%d \n",i,a[i]);
           printf("address of a[%d]--->%p \n",i,&a[i]);
                
        }
        
        
 
 
printf("\n");

}



/*  
func arr as argument 
inside func  ::
a[0]=====5 
address of a[0]--->0x7ffdd3a47450 
a[1]=====8 
address of a[1]--->0x7ffdd3a47454 
a[2]=====4 
address of a[2]--->0x7ffdd3a47458 
a[3]=====9 
address of a[3]--->0x7ffdd3a4745c 
a[4]=====3 
address of a[4]--->0x7ffdd3a47460 

func barr as argument 
inside func  ::
a[0]=====3 
address of a[0]--->0x7ffdd3a47470 
a[1]=====4 
address of a[1]--->0x7ffdd3a47474 
a[2]=====5 
address of a[2]--->0x7ffdd3a47478 
a[3]=====6 
address of a[3]--->0x7ffdd3a4747c 
a[4]=====7 
address of a[4]--->0x7ffdd3a47480 

---------------MAIN-------------------------------
inside main() ::  
arr [0]===5  
address of arr[0]--->0x7ffdd3a47450 
arr [1]===8  
address of arr[1]--->0x7ffdd3a47454 
arr [2]===4  
address of arr[2]--->0x7ffdd3a47458 
arr [3]===9  
address of arr[3]--->0x7ffdd3a4745c 
arr [4]===3  
address of arr[4]--->0x7ffdd3a47460 

arr [0]===3  
address of barr[0]--->0x7ffdd3a47470 
arr [1]===4  
address of barr[1]--->0x7ffdd3a47474 
arr [2]===5  
address of barr[2]--->0x7ffdd3a47478 
arr [3]===6  
address of barr[3]--->0x7ffdd3a4747c 
arr [4]===7  
address of barr[4]--->0x7ffdd3a47480 

 */
/*
inside func  ::a[0]=====5 
address of a[0]--->0x7ffc1db648c0 
a[1]=====8 
address of a[1]--->0x7ffc1db648c4 
a[2]=====4 
address of a[2]--->0x7ffc1db648c8 
a[3]=====9 
address of a[3]--->0x7ffc1db648cc 
a[4]=====3 
address of a[4]--->0x7ffc1db648d0 

inside main() ::  arr [0]===5  
address of arr[0]--->0x7ffc1db648c0 
arr [1]===8  
address of arr[1]--->0x7ffc1db648c4 
arr [2]===4  
address of arr[2]--->0x7ffc1db648c8 
arr [3]===9  
address of arr[3]--->0x7ffc1db648cc 
arr [4]===3  
address of arr[4]--->0x7ffc1db648d0 

*/
