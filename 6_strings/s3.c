#include<stdio.h>

int main(void)
{

char name[40];
printf("enter a name  :");
scanf("%s",name);
printf("%s %s \n", name,"bharath reddy"); 
scanf("%[^\n]",name);
printf("%s",name);


return 0;
}
