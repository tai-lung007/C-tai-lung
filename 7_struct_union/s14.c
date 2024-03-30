//returning a structure variable to function
#include<stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student);
struct student change(struct student stu);
int main(void)
{
struct student stu1={"john",12,87};
printf("&stu1: %p\t",&stu1);
struct student stu2={"marry",18,90};
printf("&stu2: %p\n",&stu2);
display(stu1);
display(stu2);
printf("===========================\n");
stu1=change(stu1);
stu2=change(stu2);
display(stu1);
display(stu2);
printf("+++++++++++++++++++++++++\n");
stu1=change(stu1);
stu2=change(stu2);

display(stu1);
display(stu2);
return 0;
}
struct student change(struct student stu)
{
stu.marks=stu.marks+5;
stu.rollno+=10;
return stu;

}
void display(struct student stu)
{
    printf("<display>\nadres of stu : %p\t",&stu);
printf("name : %s \t",stu.name);
printf("rollno: %d\t",stu.rollno);
printf("marks : %d\n----------------------------\n",stu.marks);

}
