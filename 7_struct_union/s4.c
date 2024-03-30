#include<stdio.h>

struct student
{
char name[20];
int rollno;
float marks;
};
int main(void)
{
int i;
struct student stuarr[10];

for(i=0;i<3;i++)
{
    printf("enter name ,roll no, marks :\n");
    scanf("%s%d%f",stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
}
for(i=0;i<10;i++)
{

printf("name:%s, roll: %d,  marks: %f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);

}
return 0;
}
