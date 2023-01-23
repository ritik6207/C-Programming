//Append Mode:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","a");   //append mode hold previous contant , it is not erese the previous contant and You want to add more contant your file.
    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter the Containte You want to Append:\n");
    gets(str);
    fprintf(fp,"\n %s",str);
    // fputs(str,fp);
    printf("susscefully appended:\n");
    fclose(fp);
}
