#include<stdio.h>
int main()
{
  char *name;
  printf("enter a name \n");
  int k=sizeof(name);
  printf("%d\n",k);
  scanf("%s",name);
  printf("%s",*name);


return 0;
}
