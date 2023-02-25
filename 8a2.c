#include<stdio.h>
#include<string.h>
struct emp
{
char name[20];
int salary;
};
int main()
{
 int n = 0;
printf("Please enter no of employees\n");
scanf("%d", &n);
struct emp e[n];
printf("Name of employee and their salary\n");
for(int i = 0; i < n; i++)
{
scanf("%s %d", e[i].name, &e[i].salary);
}
int s = 0;
printf("Enter position of employee\n");
scanf("%d", &s);
printf("The name of employee is %s and total salary is %d", e[s - 1].name, e[s-1].salary);
int max = 0;
int  k = 0;
int i;
for(int i = 0; i < n; i++)
{
if(e[i].salary > max)
 {
    max = e[i].salary; 
     k = i;
 }
}
printf("The Employee which has maximum salary is %s and his salary is %d", e[k].name,e[k].salary);
return 0;
}