#include<stdio.h>
int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if(n==2)
    {
        printf("prime number");

    }
    else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
        printf("not prime");
    }
    else{
        printf("prime number");
    }
    return 0;
}