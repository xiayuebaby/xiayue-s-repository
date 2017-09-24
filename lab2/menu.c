#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void Help();
void Max();
void Min();
void Add();
void Sub();

int main()
{
    char cmd[128];
    Help();
    while(1)
    {
        printf("Menu->");
        scanf("%s",cmd);
        if(strcmp(cmd,"help")==0)
        {
            Help();
        }
        else if(strcmp(cmd,"ls")==0)
        {
            system(cmd);
        }
        else if(strcmp(cmd,"pwd")==0)
        {
            system(cmd);
        }
        else if(strcmp(cmd,"max")==0)
        {
            Max();
        }
        else if(strcmp(cmd,"min")==0)
        {
            Min();
        }
        else if(strcmp(cmd,"add")==0)
        {
            Add();
        }
        else if(strcmp(cmd,"sub")==0)
        {
            Sub();
        }
        else if(strcmp(cmd,"quit")==0)
        {
            exit(0);
        }
        else
        {
            printf("Error:unsupported command,you can use 'help' to list the available commands\n");
        }
    }
}

void Help()
{
    printf("*-------*-------Help-------*\n");
    printf("* name  *     description  *\n");
    printf("*-------*------------------*\n");
    printf("* help  *     cmd tips     *\n");
    printf("* ls    *     list files   *\n");
    printf("* pwd   *     print working directory*\n");
    printf("* max   *     find the maximum*\n");
    printf("* min   *     find the minimun*\n");
    printf("* add   *     addition of two numbers*\n");
    printf("* sub   *     subtraction of two numbers*\n");
    printf("* quit  *     exit cmd     *\n");
}

//@description:find the maximum
void Max()
{
    int a,b,max;
    printf("please input two integers,such as 11 34:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("the maximum of %d and %d is %d\n",a,b,max);
}

//@description:find the minimum
void Min()
{
    int a,b,min;
    printf("please input two integers,such as 8 9:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    printf("the minimum of %d and %d is %d\n",a,b,min);
}

//@description:addition of two numbers
void Add()
{
    double num1,num2,result;
    printf("please input two numbers,such as 1 2:\n");
    scanf("%lf%lf",&num1,&num2);
    result=num1+num2;
    printf("%.2lf\n",result);
}

//@description:subtraction of two numbers
void Sub()
{
    double num1,num2,result;
    printf("please input two numbers,such as 3 5:\n");
    scanf("%lf%lf",&num1,&num2);
    result=num1-num2;
    printf("%.2lf\n",result);
}
