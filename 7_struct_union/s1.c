#include<stdio.h>
#include<string.h>

struct student
{
char name[20];//u cant have flexible arrays at the beginning u can at end (have to check)
int rollno;//unsigned
float marks;

};
int main(void)
{
struct student stu1={"marry",25,25.68};
struct student stu2,stu3;

strcpy(stu2.name,"johnn");
stu2.rollno=26;
stu2.marks=98;

printf("enter name, roll no, marks for stu3: \n");
scanf("%s %d %f",stu3.name,&stu3.rollno,&stu3.marks);//u cant use \n ,.2f

printf("%s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
printf("%s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
printf("%s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);

return 0;
}
