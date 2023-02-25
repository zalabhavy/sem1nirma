#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,rev=0;
    printf("enter your number");
    scanf("%d",&n);
    int temp = n;
    while(n!=0)
    {
    rem = n%10;    
    rev =rev + (rem*rem*rem);
    n=n/10;
    }
    if(temp==rev)
    {
        printf(" %d number is armstrong",temp);
    }
    else
    {
printf("%d is not armstrong",temp);
    }
    return 0;
}