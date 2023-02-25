#include<stdio.h>
  struct iteam
{
    char name[20];
    float qun;
    float pri;
    float cost;
};
int main()
{ 
        struct iteam i1,i2,i3,i4,i5;
        printf("Enter for first iteam");
        scanf("%s %f %f",&i1.name,&i1.qun,&i1.pri);
        printf("%f\n",(i1.pri)*(i1.qun));
        printf("Enter for second iteam");
         scanf("%s %f %f",&i2.name,&i2.qun,&i2.pri);
        printf("%f\n",(i2.pri)*(i2.qun));
         printf("Enter for third iteam");
         scanf("%s %f %f",&i3.name,&i3.qun,&i3.pri);
        printf("%f\n",(i3.pri)*(i3.qun));
         printf("Enter for fourth iteam");
         scanf("%s %f %f",&i4.name,&i4.qun,&i4.pri);
        printf("%f\n",(i4.pri)*(i4.qun));
         printf("Enter for fifth iteam");
         scanf("%s %f %f",&i5.name,&i5.qun,&i5.pri);
        printf("%f\n",(i5.pri)*(i5.qun));
        return 0;
}