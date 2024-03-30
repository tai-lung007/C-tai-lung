#include<stdio.h>
#include<string.h>
int main()
{

char str[50];
printf("enter a string :");
gets(str);

printf("length of a  string is : %u \n",(unsigned int)strlen(str));



return 0;
}

