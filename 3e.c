//guess number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,num;
     srand(time(0));
     num = rand()%10;
     printf("your rand number is %d\n",num);
      
      printf("enter your number\n");
      scanf("%d",&n);
     if(n>num)
     {
        printf("your number is big");
     }
     else if(num==n)
     {
        printf("congratiulation you win the game");
     }
     else
     {
        printf("your number is small");
     }
     return 0;
     


}