#include<stdio.h>
#include<string.h>
#include<malloc.h>

char * f()
{
char* s=malloc(8);
strcpy(s,"goodbye");
printf("insidefunc \n %s\n-------\n",s);
return s;

}
int main(void)
{
    printf("inside main\n-------------------\n");

char * f();
printf("%c\n",*f());
printf("\n---------------after \n");
printf("%c\n",*f()='A');


return 0;
}
