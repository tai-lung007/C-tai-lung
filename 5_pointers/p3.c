#include <stdio.h>

int main(void) {
    int num = 10;
    int *p = &num; // pointer to integer

    printf("-------------------------------------------------------------\n\n");

    printf("&p is %p, p is %p, &num is %p, num is %d\n\n", &p, p, &num, num);

    printf("-------------------------------------------------------------\n\n");

    void *pv = p;
    printf("&pv = %p, pv = %p,  (int *)pv has  %p\n\n\n", &pv, pv,(int *)pv);
    //printf("3>void pointer has %p\n", pv);
    //printf("4>(int *)pv has  %p\n", (int *)pv); // Casting to int pointer before printing

    printf("-------------------------------------------------------------\n\n");

    p = (int *)pv;
    printf("&pv = %p, pv = %p \n\n", &pv, pv);
    //printf("6>pv= %p\n", pv);
    //printf("7>pv %p-------------------->printing the void pointer \n", pv); // Printing the void pointer
    
    printf("(int *)pv %p  ------------->casting to int pointer and printing \n",(int *)pv); // Casting to int pointer and printing
printf("*(int *)pv =%d ------------------>dererefercing the void pointer after casting \n",*(int *)pv); // Dereferencing the void pointer after casting
    // The following lines are incorrect and may lead to undefined behavior
    // printf("%p \n",*(int *)pv); // Dereferencing a void pointer is invalid
   
    // printf("%p \n",*(int *)pv); // Dereferencing a void pointer is invalid
    // printf("%p \n",(int **)pv); // Casting to int pointer pointer and printing
    // printf("%p \n",*(int **)pv); // Dereferencing a void pointer is invalid
    // printf("%p \n",*(int *)pv); // Dereferencing a void pointer is invalid
    // printf("%p \n",**(int *)pv); // Dereferencing a void pointer is invalid

    printf("-------------------------------------------------------------\n\n");

    return 0;
}

