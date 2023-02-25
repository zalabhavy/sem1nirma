#include<stdio.h>
#include<math.h>
#include<string.h>
struct items
{
char name[20];
int quantity;
int price;
int cost;
};
void function(struct items e[])
{
printf("Result is given below:\n\n");
for(int i = 0; i < 5; i ++)
{
printf("%s\t\t%d\t%d\t%d\n", e[i].name, e[i].quantity, e[i].price,e[i].price*e[i].quantity);
}
}
int main()
{
struct items e[5];
printf("Name of item with quantity and price of each\n");
for(int i = 0; i < 5; i++)
{
scanf("%s %d %d",&e[i].name, &e[i].quantity, &e[i].price);
}
function(e);
return 0;
}