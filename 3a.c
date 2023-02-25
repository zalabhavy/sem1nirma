//find solution of equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2,real,imag;
    printf("enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
if(d==0)
{
    x1=x2=-b/2*a;
    printf("your x1=x2=%f",x1,x2);
}
else if(d>=0)
{
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("your x1=%f and x2=%f",x1,x2);
}
else
{
real = -b/2*a;
imag = sqrt(-d)/2*a;
printf("your answer of real=%.2f+%.2fi and imag=%.2f-%.2fi",real,imag,real,imag);
}
return 0;
}