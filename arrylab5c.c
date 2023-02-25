#include<stdio.h>
int main()
{
   int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i+j==4)
            {
                arr[i][j]=0;
            }
            else if(i+j<4)
            {
               arr[i][j]=-1;
            }
            else
            {
                arr[i][j]=1;
            }
        }
        
    }
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            printf("  %d  ",arr[i][j]);
        }
        printf("\n");   
     
    }

    return 0;
}