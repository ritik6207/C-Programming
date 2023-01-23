/* fteel Function is use ot find position of Index number.
 Return type of ftell function is Long int
 it's application find out length of string using fseek function
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    char ch;
    fp=fopen("_abc.txt","r");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }

    /*fseek(fp,0,SEEK_END);        //length of string
    printf("%d",ftell(fp));*/ 
    
    /*ch=fgetc(fp);
    printf("\n%c",ch);
    printf("\n%d",ftell(fp));*/

    fscanf(fp,"%s",str);
    printf("%s",str);
    printf("\n%d",ftell(fp));
    
    fclose(fp);
}