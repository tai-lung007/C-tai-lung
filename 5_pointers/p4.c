#include <stdio.h>

int main(void) {
    int num = 97;
    int *p = &num; // pointer to integer

    printf("-------------------------------------------------------------\n\n");

    printf("&p is %p, p is %p, &num is %p, num is %d\n\n", &p, p, &num, num);


    printf("-------------------------------------------------------------\n\n");

    void *pv = p;
    printf("&pv = %p, pv = %p,  (int *)pv has  %p\n\n\n", &pv, pv,(int *)pv);
    
    
    
    
    

    printf("-------------------------------------------------------------\n\n");

    //p = (int *)pv;
    printf("&pv = %p, pv = %p \n\n", &pv, pv);
    
    
    printf("(int *)pv %p  \n",(int *)pv); 
    // Casting to int pointer and printing
    printf("*(int *)pv =%d \n",*(int *)pv); 
    // Dereferencing the void pointer after casting
   printf("(char *)pv %p\n",(char*)pv);
   printf("*(char *)pv = %c\n",*(char *)pv);
   printf("(float *)pv %p\n",(float*)pv);
   printf("*(float *)pv = %9.5f\n",*(float *)pv);//*(float *)pv = 0.00000

    printf("-------------------------------------------------------------\n\n");
    float k=33.74;
    float *f;
    //f=&k;
    pv=&k;
    printf("*(float *)pv = %6.1f\n",*(float *)pv);
    
   
   

    return 0;
}

