/*   How to wirte into in File Handing?
=> There are 3 way to write File Handing:-
        (1). fputs                      //w=write mode
        (2). fprintf                    //r=read mode
        (3). fputc                      //a=append mode
* if file is dose'nt exit then first file create then open that file
* if file is exit then erase the previous output then give new output
              */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    int a=12;
    char b='P';
    fp=fopen("_abc.txt","w");     //fopen("file_name","Mode")   //Write mode
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter the String:\n");
    gets(str);
    // fprintf(fp,"%d %s %c",a,str,b);
    // fputs(str,fp);
    for (int i = 0; i <=strlen(str); i++)
    {
        fputc(str[i],fp);
    }
    
    fclose(fp);
}