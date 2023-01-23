#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    int count=1;
    fp=fopen("_abc.txt","r+");
    if (fp==NULL)
    {
        printf("cant open file");
        exit(1);
    }
    
    while ((ch=fgetc(fp))!=EOF)  //EOF= End of file

    // for(ch=getc(fp);ch!=EOF;ch=getc(fp))   //using for loop

    {
        if (ch=='\n')
        {
            count++;
        }
       
    }
    fclose(fp);
    printf("Total line of in this file %d\n",count);
}