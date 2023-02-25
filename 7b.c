#include<stdio.h>
#include<string.h>
int function(int n)
{
int A=n/100; //a=1
int B=n%100; //b=25
A=A+B/50; //a=0
B=B%50;  //b=6
A = A+B/20;
B = B%20;
A=A+B/10; //a=0
B=B%10;    //b=6
A=A+B/5; //a=1
B=B%5;  //b=1
A=A+B/2; //a=1
B=B%2; //b=1
A=A+B; //2
return A;
}
void main()
{
printf("Enter money amount:\n");
int n=0;
scanf("%d",&n);
printf("Notes combination is:%d",function(n));
}
