//find net salary
#include<stdio.h>
int main()
{
    float net,gross,basic,DA,HRA,medical,pf,deduction,insurance;
    printf("enter the basic salary of employ");
    scanf("%f",&basic);
    DA= 0.5*basic;
    HRA=0.1*basic;
    medical=0.04*basic;
    gross=basic+DA+HRA+medical;
    pf=0.05*gross;
    insurance=0.07*gross;
    deduction=insurance+pf;
    net = gross-deduction;
    printf("the net salary of employ is %f",net); //show net salary of employ
    return 0;


}