#include<stdio.h>
int main(void)
{
        int *pa[3];
        int i,a=5,b=10,c=15;
        pa[0]=&a;
        pa[1]=&b;
        pa[2]=&c;
          printf("address of a %p \n",&a);
          printf("address of b %p \n",&b);
          printf("address of c %p \n",&c);
        
         //printf(" address stored in (value of) pa[0]=%p \n",pa[0]);
        
        for(i=0;i<3;i++)
        {
                printf(" pa[%d]=%p  \t",i,pa[i]);
                printf("*pa[%d]=%d \n",i,*pa[i]);
        
        } 
        /*
        
 address of a 0x7ffca5f18950 
 address of b 0x7ffca5f18954 
 address of c 0x7ffca5f18958 
 pa[0]=0x7ffca5f18950  	*pa[0]=5 
 pa[1]=0x7ffca5f18954  	*pa[1]=10 
 pa[2]=0x7ffca5f18958  	*pa[2]=15 

        
        
        
        */
        return 0;

}
