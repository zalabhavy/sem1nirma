#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the elements");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);  
        b[i] = a[i]*a[i];
    }
    for(int i=0;i<n;i++)
    {
         printf("%d\n",b[i]); 
    }
    return 0;
}