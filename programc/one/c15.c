#include<stdio.h>
int main(void)
{

char s[]="Bouquets and Brickbats";
int i=0;

while(s[i]!='\0')
{
//printf("count is %d---s[%d]==%d---%c\n",i,i,s[i],s[i]);
printf("count is %d---s[%d]==%d---%c\n",i,i,*(s+i),*(s+i));

i++;

}
printf("%d-->%c\n",i,s[i]);
printf("-----------\n");
printf("%c \n",*(&s[2]));
printf("%s\n",s+5);
printf("%s\n",s);
printf("%c\n",*(s+2));
printf("%s\n",*(s+2));   // segmentation fault
return 0;

}
