#include<stdio.h>

int main(void)
{

  struct s1
  {
  char *str;
  struct s1* ptr;
  };

  static struct s1 arr[3]  = {
             {"Hyderabad",arr+1},
             {"Bangalore",arr+2},
             {"Delhi",arr},
          };

int i;
struct s1* p[3];
int k;

printf("-----------------------------------------------\n");

/*
printf("-----------------------------------------------\n");

printf("address of arr[] is %p\n",(arr+0));
printf("address of arr[] is %p\n",&arr[0]);

printf("-----------------------------------------------\n");
for(i=0;i<3;i++)
printf("%d-->%p\n",i,(arr+i));
printf("-----------------------------------------------\n");
printf("sizeof(styruct s1==%zu\n",sizeof(struct s1));
printf("-----------------------------------------------\n");
for(i=0;i<3;i++)
printf("%d-->%p\n",i,(p+i));
*/
printf("-----------------------------------------------\n");
for (i=0;i<=2;i++)
{
p[i]=arr[i].ptr;
}



/*    for(i=0;i<3;i++)
printf("%d-->%p\n",i,(p+i));


*/

printf("-----------------------------------------------\n");


for(i=0;i<=2;i++)
{
//printf("address of p= %p, value in p= %p, derefer =%p\n",(p+i),*(p+i),**(p+i));
    printf("value s %s\n",(*(p+i))->str);

}



printf("-----------------------------------------------\n");



printf("%s\n",(*p)->str);
printf("%s\n",(++*p)->str);
printf("%s\n",((*p)++)->str);


printf("-----------------------------------------------\n");



printf("-----------------------------------------------\n");
return 0;
}
