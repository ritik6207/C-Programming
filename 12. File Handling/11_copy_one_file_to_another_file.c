#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr,*fptr1;
    char ch;
    fptr=fopen("_abc.txt","r");
    if (fptr==NULL)
    {
        printf("can't open");
        exit(1);
    }
    fptr1=fopen("copy.txt","w");
    if (fptr1==NULL)
    {
        printf("can't open");
        exit(1);
    }
    while ((ch=getc(fptr))!=EOF)

    // for(ch=getc(fptr);ch!=EOF;ch=getc(fptr))  //also use for loop
    {
        fputc(ch,fptr1);
    }
    fclose(fptr);
    fclose(fptr1);
    printf("successfully copied");
}