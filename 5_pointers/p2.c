#include <stdio.h>

int main(void) {
    int num = 10;
    int *p = &num; // pointer to integer

    printf("-------------------------------------------------------------\n\n");

    printf("&p is %p, p is %p, &num is %p, num is %d\n\n", &p, p, &num, num);

    printf("-------------------------------------------------------------\n\n");

    void *pv = p;
    printf("&pv = %p, pv = %p \n\n", &pv, pv);
    printf("void pointer is %p\n", pv);
    printf("value  %p\n", (int *)pv);
    // printf("value **pv %d\n", **pv); // You cannot dereference a void pointer directly

    printf("-------------------------------------------------------------\n\n");

    p = (int *)pv;
    printf("&pv = %p, pv = %p \n\n", &pv, pv);
    printf("void pointer is %p\n", pv);
    printf("value pv %p\n", pv);
    // printf("value **pv %d\n", (int **)pv); // You cannot dereference a void pointer directly
    printf("%d \n",*(int *)pv);
    printf("%p \n",(int *)pv);

    printf("%p \n",*(int *)pv);
    
    printf("%p \n",(int *)pv);
    printf("%p \n",*(int *)pv);

    printf("%p \n",(int **)pv);
    printf("%p \n",*(int **)pv);
    
    
    printf("%p \n",*(int *)pv);
    printf("%p \n",**(int *)pv);




    printf("-------------------------------------------------------------\n\n");

    return 0;
}

