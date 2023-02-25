#include<stdio.h>
#include<math.h>
#include<string.h>
int *function(int *ptr,int n)
{             
int temp = ptr[0];
ptr[0] = ptr[2];
ptr[2] = ptr[1];
ptr[1] = temp; 
return ptr;
}
int main()
{
printf("Enter any three number\n");
int arr[3];
for(int i = 0;i<3;i++)
{
scanf("%d", &arr[i]);
}
int *ptr1 = 0;
ptr1 = function(arr, 3);
printf("Modified array is:\n");
for(int i=0;i<3; i++)
{
printf("%d ",ptr1[i]);
}
return 0;
}