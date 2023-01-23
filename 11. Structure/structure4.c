//Typedefine Structure
#include <stdio.h>
typedef struct grosary
{
    char grosary_name[20];
    int grosary_Rs;

}saman;

void main()
{
    saman s={"Meet",220};
    printf("%s %d",s.grosary_name,s.grosary_Rs);
}