#include<stdio.h>

int main(void)
{

int year;
int i=0,n;
printf("number of test entries\n");
scanf("%d",&n);


printf("----------------------------------\n");
while(i<n)
{
printf("enter the year:");
scanf("%d",&year);


if(year%100!=100 && year%4==0 || year%400==0)
    printf("leap year\n");
else
    printf("nope \n");

/*

if(year%100!=0)
{
 if(year%4==0)
     printf("leap year\n");
 else
     printf("not a leap year\n");
}
else
{

if(year%400==0)
 printf("leap yttear\n");
else
    printf("nota a yera\n");

}
*/
i++;
}
return 0;
}
