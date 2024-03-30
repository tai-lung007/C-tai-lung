#include<stdio.h>

int main(void){

   int a=5;
   int *pa;
   int **ppa;
   
   
   pa=&a;
   ppa=&pa;
   
   
        printf("address of a= %p \n",&a);
        printf("value a pa=address of a= %p \n",pa);
        printf("value of *pa = value  of a= %d \n",*pa);
        printf("============================================\n");

        printf("address of pa= %p \n",&pa);
        printf("value of ppa=address of pa= %p \n",ppa);
        printf("value of*ppa=value of pa=address of a= %p \n",*ppa);
printf("============================================\n");

        printf("value of **ppa =value  of a= %d \n",**ppa);
        printf("address of ppa= %p \n",&ppa);
        


printf("============================================\n");


return 0;
}
