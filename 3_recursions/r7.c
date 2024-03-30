#include<stdio.h>
int func(int,int);
int main(void)
{
printf("%d\n",func(3,8));
printf("%d\n",func(3,0));
printf("%d\n",func(0,3));
return 0;
}
int func(int a, int b)
{
//    printf("************************************\n");
//  printf("a=%d b=%d\t",a,b);
  
// printf("&a= %p,&b =%p \t",&a,&b);
 if(b==0)
     return 0;
 if(b==1)
     return a;
 //  static int x=0;
 // x++;
 // printf("before function called %dth time\n",x);
 int k=0;k=a+func(a,b-1);
 //printf("##########################\nafter func called \n");

 // printf("a=%d b=%d\t",a,b);
 printf("k=%d\t",k);
// printf("$$$$$$$\t");
// printf("&a= %p,&b =%p \t",&a,&b);
// printf("before returning\n");
// printf("+++++++++++++++++++++++++++++\n");
 return k;
//printf("====================\nafter returning\n");
// printf("a=%d b=%d\n",a,b);
// printf("k=%d\n",k);
// printf("&a= %p,&b =%p \n",&a,&b);
}
