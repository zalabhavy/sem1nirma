//swap by temp variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    temp=b;
    b=a;
    a=temp;
    printf("a is %d and b is %d",a,b);
    return 0;
}