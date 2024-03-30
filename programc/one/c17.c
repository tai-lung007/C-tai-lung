#include<stdio.h>
#include<stdlib.h>


int main(void)
{
char *p="hello worlkd!";


printf("address of p  ==%p, value in p =%p, \n",&p,p);


//p[0]='H'; // segmentation fault
//p[0]="H";
printf("%s\n",p);


return 0;
}
