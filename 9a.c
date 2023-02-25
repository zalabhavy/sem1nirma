#include<stdio.h>
#include<math.h>
#include<string.h>
int *func(int *ptr,int n)
{
for(int i = 0; i < n; i++)
{
if(i % 2 == 0)
{
ptr[i] += 1;
}
else 
ptr[i] += 2;
}
return ptr;
}
int main()
{
printf("Enter no of element of array\n");
int n;
scanf("%d", &n);
printf("Enter all %d element\n", n);
int arr[n];
for(int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
int *ptr1;
ptr1 = func(arr, n);
printf("Modified array is:\n");
for(int i = 0; i < n; i++)
{
printf("%d ",ptr1[i]);
}
return 0;
}
