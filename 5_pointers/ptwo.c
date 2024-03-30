#include<stdio.h>


int main(void){


    int arr[5]={5,10,15,20,25};
    int i;
    
    for(i=0;i<5;i++)
    printf("%dth element in array----->%d\n",i, *(arr+i));
    
    int barr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
    int (*ptr)[4];
    
    ptr=barr;
    
    printf("%p  %p   %p\n",ptr,ptr+1,ptr+2);        //0x7fffeee30fa0  0x7fffeee30fb0   0x7fffeee30fc0
    printf("%p  %p   %p\n",*ptr,*(ptr+1),*(ptr+2)); //0x7fffeee30fa0  0x7fffeee30fb0   0x7fffeee30fc0
    printf("%d  %d   %d\n",**ptr,**(ptr+1),**(ptr+2));//10  20   30
    
    
    printf("first array-->  %d  %d   %d   %d\n",*(*(ptr+0)+0),*(*(ptr+0)+1),*(*(ptr+0)+2),*(*(ptr+0)+3));//first array
    printf("seconda array-> %d  %d   %d   %d\n",*(*(ptr+1)+0),*(*(ptr+1)+1),*(*(ptr+1)+2),*(*(ptr+1)+3));//first array
    printf("third array-->  %d  %d   %d   %d\n",*(*(ptr+2)+0),*(*(ptr+2)+1),*(*(ptr+2)+2),*(*(ptr+2)+3));//first array

    printf("------------------------------------------------------------------------------------------------\n");
    
    
    int j;
    
    for(i=0;i<3;i++){
    
    for(j=0;j<4;j++){
    
    printf("the %d array and %d element %d \n",i+1,j ,*(*(ptr+i)+j));
    
    
    }
    printf("-----------------\n");
    
    }
    
    
    printf("------------------------------------------------------------------------------------------------\n");
    
    printf("sizeof  ptr is  %ld \n",sizeof(ptr));//sizeof  ptr is  8 
    printf("sizeof *ptr is  %ld \n",sizeof(*ptr));//sizeof *ptr is  16 
    
    printf("address of ptr  %p\n",ptr);//address of ptr  0x7fff3711f730
    printf("address of *ptr %p\n",*ptr);//address of *ptr 0x7fff3711f730
    
    printf("value of ptr %d\n",(*ptr)[0]);//value of ptr 10
    


return 0;
}
