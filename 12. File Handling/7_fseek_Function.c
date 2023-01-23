/*fseek() use to moving of position.
 fseek(FILE_*file,long_ofset,int_orgin)

 int_orgin=SEEK_SET //position in Beging
          =SEEK_CUR //position in current 
          =SEEK_END //position in End
long_ofset = Which position you want to read/write with the help of Mode such as "r","w","a","r+","w+" and "a+"
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("_abc.txt","r");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fseek(fp,6,SEEK_SET);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fseek(fp,-4,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fseek(fp,-2,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fclose(fp);
}