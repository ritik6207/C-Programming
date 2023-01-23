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
    struct BookInformation s;
    printf("Enter  Book Information of Book such as Book name , auther, No of page and prise:\n");
    scanf("%s%s%d%f",s.book_name,s.auther,&s.No_of_page,&s.prise);
    printf("The information of book  given below\n");
    printf("%s\t%s\t%d\t%f",s.book_name,s.auther,s.No_of_page,s.prise);
}
