//convet celsius to fahrenhit
#include<stdio.h>
int main()
{
    double c1,c2,f,diff;
    printf("enter the temp of ahmedabad in celsius");
    scanf("%lf",&c1);
    printf("enter the temp of mumbai in fahrenhit");
    scanf("%lf",&f);
    c2=(f-32)*0.55;
    printf("temp of mumbai in celsius is %lf\n",c2);
    diff=c2-c1;
    printf("diffrence of temp is %lf\n",diff);
    return 0;
}