#include<stdio.h>
int main(void)
{

int *ptr,*p;

printf("%ls \n",ptr); //null
//printf("%d",*ptr); //segmentation fault(core dumped)
printf("%ld",sizeof(ptr));  //8 bytes
return 0;
}
