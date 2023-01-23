//Array of structure
#include<stdio.h>
#include<stdio.h>
struct BookInformation
{
    char book_name[20];
    char auther[20];
    int No_of_page;
    float prise;
};
void main()
{
    struct BookInformation s[3];
    printf("Enter  Book Information of Book such as Book name , auther, No of page and prise:\n");
    for(int i=0;i<=3;i++)
    {
    scanf("%s%s%d%f",s[i].book_name,s[i].auther,&s[i].No_of_page,&s[i].prise);
    }
    printf("The information of book  given below\n");
    for(int i=0;i<=3;i++)
    {
    printf("\n%s\t%s\t%d\t%f\n",s[i].book_name,s[i].auther,s[i].No_of_page,s[i].prise);
    }
}

