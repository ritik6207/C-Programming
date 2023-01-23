#include <stdio.h>
void modifie(char [],char []);      //also written, void modifie(char*, char*):  in string function, work refrence value not call value
void main()
{
    char s1[]="Ritik";
    char s2[]="Kumar";                      
    modifie(s1,s2);
}
void modifie(char s1[],char s2[])
{
    int i,l=0;
    for ( i = 0; s1[i]!='\0' ; i++)
    {
        l=l+1;
    }
    printf("Length of first s1 is %d\n",l);
    printf("%s %s",s1,s2);
    s1 [2]='p';
    printf("\n%s",s1);
}