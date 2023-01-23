#include <stdio.h>
char* disply();
void main()
{
    char* str;
    str=disply();
    printf("Sring is: %s",str);
}
char* disply()
{
    return "Ritik kumar";
}



// Modifie:-
/*#include <stdio.h>
char* disply();
void main()
{
    char* str;
    str = disply();
    printf("String is: %s\n",str);
    str[1]='P';
    printf("String is: %s",str);
}
char* disply()
{
    static char str[]="Ritik";
    return str;
}*/