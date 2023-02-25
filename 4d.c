#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rem,rev=0;
   
    printf("enter your number");
    scanf("%d",&n);
     int temp=n;
   while(n!=0) 
   {
    rem = n%10;
    rev =rev*10+rem;
    n=n/10;
    
   }
    if(temp==rev)
    {
        printf("your number is palidomial");
    }
    else
    {
     printf("not palidomial");
    }
    return 0;
}