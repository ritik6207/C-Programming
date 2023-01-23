/* In this mode you can Modifie the previous file contant
    but can not write another contant in this file.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","r+");        //r+ mode is read/write(modifie)
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc('r',fp);
    fputs("Poddar",fp);
    fclose(fp);
    
}