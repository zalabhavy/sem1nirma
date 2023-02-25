#include<stdio.h>
#include<math.h>
#include<string.h>
void function(int *ptr, int n)
{
printf("Reversed array is:\n");
for(int i = n - 1; i >= 0; i--)
{
printf("%d ", ptr[i]);
}
}
int main()
{
printf("Enter no of element of array\n");
int n = 0;
scanf("%d", &n);
printf("Enter all %d element\n", n);
int arr[n];
for(int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
function(arr,n);
return 0;
}