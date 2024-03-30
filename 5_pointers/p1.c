#include<stdio.h>

int main(void)
{

int num=10;
int* p=&num; //pointer to integer
printf("-------------------------------------------------------------\n\n");
//printf("address of num is %p , value of num is %d\n",&num,num);
//printf("address of num is %p , value of num is %d\n",&num,num);
printf("&p is %p,  p is %p,&num is %p , num is %d\n\n", &p,p,&num,num);


printf("-------------------------------------------------------------\n\n");

void * pv=p;
printf("&vp =%p,vp=%p \n\n",&pv,pv);
printf("void pointer is %p\n",pv);
printf("value *pv %p\n",(void *)pv);
printf("value **pv %d\n",**pv);

printf("-------------------------------------------------------------\n\n");
p=(int *)pv;
printf("&vp =%p,vp=%p \n\n",&pv,pv);
printf("void pointer is %p\n",pv);
printf("value *pv %p\n",(void *)pv);
printf("value **pv %d\n",(int **)pv);
//printf("value stored in  p : %p\n",p);
//printf("value *p %d\n",*p);
printf("-------------------------------------------------------------\n\n");
//printf("");

printf("-------------------------------------------------------------\n\n");




return 0;
}
