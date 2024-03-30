#include<stdio.h>
#include<string.h>
//passing individual structure members as arguments to functions

struct student 
{
char name[20];
int rollno;
int marks;
}stu1;
//global unintialised variables are assigned zero. .bss
void display(char name[],int rollno,int marks);
int main(void)
{
struct student stu1={"john",12,87};
struct student stu2={"marry",18,90};
printf("%p\t%p\n",(void*)&(stu1),(void*)&(stu2));
display(stu1.name,stu1.rollno,stu1.marks);
display(stu2.name,stu2.rollno,stu2.marks);

return 0;
}
void display(char name[],int rollno,int marks)
{
    printf("%p\n",(void*)&(stu1));//stu1 undeclare
    printf("----\n");
    printf("%s\t%d\t%d\n",stu1.name,stu1.rollno,stu1.marks);
    printf("---\n-");
printf("name - %s(%p)\n",name,(void *)&(name));
printf("rollno -%d(%p)\n",rollno,&rollno);
printf("marks  -%d(%p)\n",marks,&marks);
}
