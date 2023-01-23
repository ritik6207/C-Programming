/*   How to Read into in File Handing?
=> There are 2 way to read File Handing:-
        (1). fgets                      //w=write mode
        (2). fgetc                    //r=read mode //a=append mode
* if file is dose'nt exit then give output NULL, r mode dose'nt create any file
* if file is exit then Read the previous output then give new output
      */
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp =NULL;
    char ch;
    char str[50];
    fp=fopen("abc.txt","r");   //read mode
    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    while(!feof(fp))
    {
    fgets(str,12,fp);
    printf("%s",str);
    }
    /*while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }*/
    fclose(fp);
}