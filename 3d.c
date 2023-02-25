//amit and ajay game
#include<stdio.h>
int main()
{
    int n;
    int num;
    printf("enter your number");
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("0");
    }
    else if((n*2)%10==0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
    return 0;
}