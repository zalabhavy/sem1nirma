#include<stdio.h>
#include<math.h>
#include<string.h>
char *function(char *ptr1, char *ptr2, char *ptr3)
{
int k = 0;
for(int i = 0; i < strlen(ptr1); i++)
{
ptr3[k] = ptr1[i];
k++;
}
for(int i = 0; i < strlen(ptr2); i++)
{
ptr3[k] = ptr2[i];
k++;
}
return ptr3;
}
int main()
{
printf("Enter Two Strings\n");
char a[1000], b[1000], c[2000];
scanf("%s %s", a, b);
char *ptr;
ptr = function(a, b, c);
printf("%s",ptr);
return 0;
}