#include<stdio.h>

int f(char *s,char a)
{

//printf("s=%s, ch=%c,\n&s=%p ,&ch =%p\n",*s,a,s,&a);
if(*s=='\0')
    return 0;

if(*s==a)
    return 1+ f(s+1,a);

printf("s=%d, ch=%c,\n&s=%p ,&ch =%p\n",*s,a,s,&a);
return f(s+1,a);
}
int main(void)
{
char str[100],a;
// no of matching charachters in a stringprintf();
printf("entera string:\n") ;
gets(str);

printf("entera charachter :\n");
        scanf("%c",&a);
        printf("%d\n",f(str,a));


return 0;
}
