#include<stdio.h> //print diffrent data types scanf and printf 
int main()
{
    int n;
    float f;
    double d;
    printf("enter your int float and double\n");
    scanf("%d",&n);
    printf("your int is %d\n",n);
    scanf("%f",&f);
    printf("your float is %f\n",f);
    scanf("%ld",&d);
    printf("your double is %ld\n",d);
    return 0;
}