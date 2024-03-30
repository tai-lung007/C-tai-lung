
//returning a structure variable to function
//using pointers to structure as argument 
//inorder to avoid another instance but use referencing from the same instance using pointer


#include<stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student *);
struct student* change(struct student *);
int main(void)
{
struct student stu1={"john",12,87};
printf("&stu1: %p\t",&stu1);
struct student stu2={"marry",18,90};
printf("&stu2: %p\n=============================\n",&stu2);
display(&stu1);
display(&stu2);
change(&stu1);
change(&stu2);
display(&stu1);
display(&stu2);
//change(&stu1);
//change(&stu2);
//display(&stu1);
//display(&stu2);
return 0;
}
struct student* 
change(struct student *stuptr)
{
stuptr->marks=stuptr->marks+5;
stuptr->rollno+=10;
return stuptr;
}
void display(struct student* stu)
{printf("address of stu = %p\t",stu);
printf("name : %s \t",stu->name);
printf("rollno: %d\t",stu->rollno);
printf("marks : %d\n===========================\n",stu->marks);
}
