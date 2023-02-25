//read the price 
#include<stdio.h>
int main()
{
    float price,paisa,ruppes;
    printf("Enter the price");
    scanf("%f",&price);
    int temp = price*100;
    ruppes=temp/100;
    paisa=temp%100;
    printf("your amount is %f ruppes %f paisa",ruppes,paisa);
    return 0;
}
    






