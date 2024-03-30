
//passing arrayv of structures as arguments

#include<stdio.h>
struct student 
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student*);
void dec_marks(struct student* );

int  main(void)
{
int i,j;
struct student stuarr[3]={
    {"mar",11,98},
    {"joh",12,97},
    {"tom",13,89}
};

//why is there no structure padding

printf("\n------------------\n");
for(i=0;i<3;i++)
{ 
 
    printf("(%s)%p(%zu)   (%d)%p(%zu)   (%d)%p(%zu)     --> %zu bytes\n",
            stuarr[i].name,(void *)&(stuarr[i].name),sizeof(stuarr[i].name),
            stuarr[i].rollno,(void *)&(stuarr[i].rollno),sizeof(stuarr[i].rollno),
            stuarr[i].marks,(void *)&(stuarr[i].marks),sizeof(stuarr[i].marks),
            sizeof(stuarr[i])
            );
//    printf("addr= %p,  sizeof: %zu  \n",(void *)&stuarr[i],sizeof(stuarr[i]));
}

    for(i=0;i<3;i++)
        display(&stuarr[i]);

    dec_marks(stuarr);

    for(i=0;i<3;i++)
        display(&stuarr[i]);

    dec_marks(stuarr);

     for(i=0;i<3;i++)
         display(&stuarr[i]);

  return 0;
}

void dec_marks(struct student * mptr)
{
    int i;
    for(i=0;i<3;i++)
    {  mptr->marks-=10;
        printf("mptr dec by 10\n");
    }

}

void display(struct student *kptr)
{
//printf("");
printf("&kptr =%p ,(kptr=stuarr[i]=%p)name: %s\t",&kptr,kptr,kptr->name);
printf("rolln: %d\t",kptr->rollno);
printf("marks : %d\n----------------\n",kptr->marks);
}
