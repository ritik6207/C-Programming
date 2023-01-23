#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("_abc.txt","w+");   //w+ mode is only write mode.
    if (fp==NULL)
    {
        printf("Can't open file");
        exit(1);
    }
    fputs("Ritik",fp);
    fclose(fp);
}