#include<stdio.h>
int main()
{
    int n,index;
    printf("enter the size of arry");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter index you want to delate");
    scanf("%d",&index);
    // n = n+1;
    for(int i=index;i<n-1;i++)
    {
        a[i] = a[i+1];
    } 
   n=n-1;
    printf("your modifide arry is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}