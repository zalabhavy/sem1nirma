#include<stdio.h>
int main()
{
    int  n,m;
    float a,b;
    
    printf("enter the numbers");
    scanf("%d %d",&n,&m); 

    printf("your sum is %d\n",n+m);
    printf("your sum ADD is %d\n",&n+m);

    
    printf("your substract is %d\n",n-m);
    printf("your substract ADD is %d\n",&n-m);
    printf("your modulo is %f\n",m%n);
  

    printf("enter a and b");
    scanf("%f%f",&a,&b);

    printf("your multification is %f\n",a*b);
    printf("your div is %f\n",a/b);
     

    return 0;

}