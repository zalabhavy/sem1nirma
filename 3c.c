//employ weekly salary
#include<stdio.h>
int main()
{
    int hrs,sal,overtime,salary;
    int clerk=1,teacher=2,principal=3,id;
    printf("enter the name of employ");
    scanf("%d",&id);
    if(id==1)
    {
        sal=100;
    }
    else if(id==2)
    {
        sal=200;
    }
    else if(id==3)
    {
        sal=400;
    }
    else
    {
        printf("emply id is invalid");
    }
    printf("enter the employ's working numbers");
    scanf("%d",&hrs);
    if(hrs<44)
    {
        salary=sal*hrs;
        printf("employs salry %d\n",salary);
    }
    else if(hrs>44 && hrs<50)
    {
        overtime=hrs-44;
        salary=44*sal+overtime*2*sal;
        printf("salary of the employ is %d\n",salary);
    }
    else
    {
        printf("employ working hours more than 50\n");
        salary =44*sal+2*6*sal;
        printf("employ's salary is %d\n",salary);
    }
    return 0;
}