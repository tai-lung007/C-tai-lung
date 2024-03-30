#include<stdio.h>
#include<stdlib.h>

int main(void)
{


    FILE   *sptr,*dptr;

    int ch;

    if((sptr=fopen("myfile","r"))==NULL)
    {
        printf("error in opening source file: \n");
        exit(1);
    }

    if((dptr=fopen("destination.txt","w"))==NULL)
    {
       printf("errorn in destination file :\n");
        exit(1);
    }


    while((ch=fgetc(sptr))!=EOF)
    {
      fputc(ch,dptr);

    }
fclose(sptr);
fclose(dptr);


return 0;
}
