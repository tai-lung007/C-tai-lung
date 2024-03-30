#include<stdio.h>

//pass structuer variable as a argument to a functions
struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student);
int main(void)
{

struct student stu1={"john",12,87};
struct student stu2={"marry",18,90};
printf("name:   %s, (%p)\n",stu1.name,&stu1.name);

printf("rollno: %d, (%p)\n",stu1.rollno,&stu1.rollno);
display(stu1);
display(stu2);
return 0;
}

void display(struct student cpstu)
{

printf("===================================\n");

printf("name:   %s, (%p)\n",cpstu.name,&cpstu.name);

printf("rollno: %d, (%p)\n",cpstu.rollno,&cpstu.rollno);

printf("marks : %d, (%p)\n",cpstu.marks,&cpstu.marks);


}
