//print romanumber
#include<stdio.h>
int main()
{
    int n;
    int i;
//printf("enter the number");
   // scanf("%d",&n);
   
    for(int i=1;i<=100;i++)
    {
        n=i;
        printf(" %d ", i );
        while(n!=0)
        {
        if(n>=100)
        {
            printf("C");
            n = n-100;
        }
        else if(n>=90)
        {
            printf("XC");
            n = n-90;
        }
         else if(n>=50)
        {
            printf("L");
            n = n-50;
        }
         else if(n>=40)
        {
            printf("XL");
            n = n-40;
        }
         else if(n>=10)
        {
            printf("X");
            n = n-10;
        }
         else if(n>=9)
        {
            printf("IX");
            n = n-9;
        }
         else if(n>=5)
        {
            printf("V");
            n = n-5;
        }
         else if(n>=4)
        {
            printf("IV");
            n = n-4;
        }
        else if(n>=1)
        {

            printf("I");
            n = n-1;
        }
        }
        
        printf("\n");
    }
    return 0;
}