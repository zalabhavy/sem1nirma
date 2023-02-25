//find interest
#include<stdio.h>
int main()
{
    int n,r,t,interest;
    printf("enter the value of n,r and t");
    scanf("%d%d%d",&n,&r,&t);
    interest=n*(1+r*t);
    printf("your interest is %d\n",interest);
    return 0;

}