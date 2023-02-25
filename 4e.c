//guess number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,num;
     srand(time(0));
     num = rand()%5;
    // printf("your rand number is %d\n",num);
      
     // printf("enter your number\n");
      //scanf("%d",&n);
      for(int i=1;i<=5;i++)
      {
        
      printf("enter your number\n");
      scanf("%d",&n);
     if(n>num)
     {
        printf("your number is big in %d trial\n",i);
     }
     else if(num==n)
     {
        printf("congratiulation you win the game in %d trial\n",i);
        break;
     }
     else
     {
        printf("your number is small in trial %d\n",i);
     }

      }
      return 0;
}
     
     