#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of arry");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("reverse elements are %d\n",a[i]);
    }
    return 0;
}