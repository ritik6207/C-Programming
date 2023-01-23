#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
}s2={12,"rohit",89.23};
void main()
{
    struct student s1={23,"Ritik",96.23};
    struct student s3={45,"Ram",56.23};
    printf("%d %s %f\n",s1.roll_no,s1.name,s1.marks);
    printf("%d %s %f\n",s2.roll_no,s2.name,s2.marks);
    printf("%d %s %f",s3.roll_no,s3.name,s3.marks);
}
