#include<stdio.h>
int main()
{
    int max;
    int n;
    printf("enter the size of arry");
    scanf("%d",&n);
    int a[n];
    printf("enter the elemets");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(int i=0;i<n;i++)
    {
if(max<a[i])
{
    max = a[i];
    
}
    }
    printf(" max number is %d\n",max);
    return 0;
    
}