#include<stdio.h>
int main()
{
    int arr[5][4];
    int i;
    int j;
    for(int i=0;i<5;i++)
    {
        printf("marks of student %d",i+1);
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your matrix is\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int n,m;
    printf("enter the number for student and subject");
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {   
        int sum1=0;
    float avg = 0;
        for(int j=0;j<m;j++)
        {    
            sum1 = sum1 + arr[i][j]; 
        }
        avg = sum1/4;
        printf("marks of student %d is %d\n",i+1,sum1);
        printf("avg of subject %d is %f\n",i+1,avg);
    }
    return 0;
}