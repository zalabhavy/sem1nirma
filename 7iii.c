#include<stdio.h>
int rec(int m)
{
    if(m==0)
    {
        return 0;
    }
    if(m==1)
    {
        return 1;
    }
    else
    {
        return rec(m-1)+rec(m-2);
    }
}
int main()
{
    int m;
    printf("enter the value of index for fibonachi serice: ");
    scanf("%d",&m);
    if(m==0)
    {
        printf("0");
    }
    if(m==1)
    {
         printf("1");
    }
   
    printf("%d",rec(m-1)+rec(m-2));
    return 0;
}