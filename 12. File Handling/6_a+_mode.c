#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p=NULL;
    char ch;
    p=fopen("_abc.txt","a+");
    if (p==NULL)
    {
        printf("can't open file");
        exit(1);
    }
    fputc('G',p);
    rewind(p);
    while(!feof(p))
    {
        ch=fgetc(p);
        printf("%c",ch);
    }
    
    fclose(p);
    
}