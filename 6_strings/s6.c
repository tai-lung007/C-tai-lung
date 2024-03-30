#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	char *str;
	str=(char *)malloc(10);

	printf("enter a string scanf:");
	scanf("%s",str);
	printf("string is : %s\n",str);
	
	printf("enter another this tyme its gets\n\n\n ");
	free(str);
        printf("gets puts check after\n");
	//gets(str);
	gets(str);
	//scanf("%s",str);
	printf("the string now is %s",str);
	puts(str);	

	return 0;




}
