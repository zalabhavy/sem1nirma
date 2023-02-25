#include<stdio.h>
int main()
{
    int n;
    printf("enter the elements");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);   
    }
    return 0;
}