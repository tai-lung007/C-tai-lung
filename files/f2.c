#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;
    int ch;

    if ((fptr=fopen("myfile","a")) == NULL)
    {
        printf("error in opening file \n");
        exit(1);
    }
    
    printf("Enter text:\n");
    
    while ((ch=getchar() ) != EOF)
    {
        fputc(ch, fptr);
    }

    fclose(fptr);

    return 0;
}
