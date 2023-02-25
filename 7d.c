#include<stdio.h>
void main()
{
int a,c;
long f,f1,fact();
float ans;
printf("Enter a number of balls choose by aman:\n");
scanf("%d",&a);
f=fact(a);
printf("The factorial of %d is %d\n",a,f);
printf("Enter a number of balls choose by shoaib:\n");
scanf("%d",&c);
f1=fact(c);
printf("The factorial of %d is %d\n",c,f1);
ans=f/f1;
printf("The ratio is:%f\n",ans);
}
long fact(int b)
{
int i;
if(b==1)
return 1;
else
i=b*fact(b-1);
return(i);
}
