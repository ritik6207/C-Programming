#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void main()
{
    struct student s;
    struct student *ptr=&s;
    printf("Enter the name of student , roll no and marks:\n");
    scanf("%s%d%f",ptr->name,&ptr->roll_no,&ptr->marks);
    printf("Student Data given Below:\n");
    printf("%s\t%d\t%f",ptr->name,ptr->roll_no,ptr->marks);
}