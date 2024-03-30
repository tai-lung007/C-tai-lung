#include<stdio.h>
void func(double d[],int * i,char c[5])
{
        printf("inside func() :   ");
        printf("size of(d)=%ld \t",sizeof(d));
        printf("size of(i)=%lu \t",sizeof(i));
        printf("size of(c)=%ld\n",sizeof(c));
        printf("%p   %p   %p \n",d,i,c);

}

int main(void){

        double d_arr[5]={1.4,2.5,3.7,4.1,5.9};
        int    i_arr[5]={1,2,3,4,5};
        char  c_arr[5]={'a','b','c','d','e'};        
        printf("inside main() :   ");
        printf("size of(darr)=%lu \t",sizeof(d_arr));
        printf("size of(iarr)=%lu \t",sizeof(i_arr));
        printf("size of(carr=%lu \n",sizeof(c_arr));
        printf("%p   %p   %p \n",d_arr,i_arr,c_arr);






}
