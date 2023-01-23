#include<stdio.h>
void sum(int a,int b){printf("Sumcation = %d\n",a+b);}
void sub(int a,int b){printf("Subtraction = %d\n",a-b);}
void mul(int a,int b){printf("Multipication = %d\n",a*b);}
void div(int a,int b){printf("Division = %d\n",a/b);}
void main()
{
    int ch,a,b;
    void (*ptr[10]) (int ,int)={sum,sub,mul,div};     //function call:
    printf(" 0 for sum \n 1 for sub \n 2 for Mul \n 3 for Div\n");
    printf("Enter choise:- ");
    scanf("%d",&ch);
    printf("Enter the value of A and B:\n");
    scanf("%d%d",&a,&b);
    (*ptr[ch])(a,b);        //(*ptr[ch]) behave like array of pointer


    /*switch (ch)
    {
    case 0:sum(a,b);break;
    case 1:sub(a,b);break;
    case 2:mul(a,b);break;       //in switch case U can write in function call this formate, but "void (*ptr[10]) (int ,int)={sum,sub,mul,div};" nither requred nor "(*ptr[ch])(a,b);" this.
    case 3:div(a,b);break;
    default:
       printf("Enter valid choise\n");
        break;
    }*/
}