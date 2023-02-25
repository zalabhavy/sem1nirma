#include<stdio.h>
#include<string.h>
#include<math.h>
struct employ
{
    char name[30];
    int id;
    float salary;
    
};
float max(struct employ e)
{
    float a,b,c;
    e.salary = (a>b) ? ((a>c)?a:c):((b>c)?b:c);
    return e.salary;
} 
int main()
{
   struct employ e1,e2,e3;
   printf("enter the value for id of e1");
   scanf("%d",&e1.id);
   printf("enter the value for name of e1");
   scanf("%s",&e1.name);

   display(e1);


   printf("enter the value for id of e2");
   scanf("%d",&e2.id);
   printf("enter the value for name of e2");
   scanf("%s",&e2.name);
  
   display(e2);


   printf("enter the value for id of e3");
   scanf("%d",&e3.id);
   printf("enter the value for name of e3");
   scanf("%s",&e3.name);
   
   display(e3); 
   printf("max salary is %f",max);
   return 0;
}
void display(struct employ e)
{
    float basic,DA,HRA,salary;
    printf("Enter the basic salary");
    scanf("%f",&basic);
    DA = basic*0.5;
    HRA = basic*0.1;
    e.salary = basic + DA + HRA;
    printf("salary of employ is %f\n",e.salary);
}
// int max(struct employ e)
// {
//     float a,b,c;
//     float result = (a>b) ? ((a>c)?a:c):((b>c)?b:c);
//     printf("max salary is %f",result);
// }




