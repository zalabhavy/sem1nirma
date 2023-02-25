#include<stdio.h>
struct  complex
{
    int real;
    int img;
};
int main()
{
     struct complex c1,c2,c3;
     printf("For complex number 1");
     scanf("%d %d",&c1.real,&c1.img);
     printf("For complex number 2");
     scanf("%d %d",&c2.real,&c2.img);
     c3.real = (c1.real+c2.real);
     c3.img = (c1.img+c2.img);
     printf("resulted complex number is %d + i%d",c3.real,c3.img);
     return 0;
     
     
     
}