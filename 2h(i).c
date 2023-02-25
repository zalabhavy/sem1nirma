//find gratest number in two
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    max = (a>b) ? printf("a=%d is big\n",a):printf("b=%d is big\n",b);
    return 0;
}