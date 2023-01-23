#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    char ch;
    fp=fopen("_abc.txt","r+");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(fp,5,SEEK_SET);
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    
    rewind(fp);  //rewind the string
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

    fclose(fp);
}