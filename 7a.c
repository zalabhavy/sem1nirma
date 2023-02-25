#include<stdio.h>
void UN(int arr[],int lena,int arr1[],int lenb)
{
    int un[lena];
    for(int i=0;i<lena;i++)
    {
        un[i] = arr[i];
    }
    for(int j = 0;j<lenb;j++)
    {
        int count =0;
        for(int i=0;i<lena;i++)
        {
        if(un[i]==arr1[j])
        {
        count++;
        continue;
        }
        //else{}
    }
    if(count==0)
    {
        lena++;
        un[lena-1] = arr1[j];
    }
    }
    for(int i=0;i<lena;i++)
    {
        printf("%d ",un[i]);
    }
}
void main()
{
    int la,lb;
    printf("enter the size");
    scanf("%d",&la);
    int a[la];
    printf("enter elelements of first");
    for(int i=0;i<la;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size");
    scanf("%d",&lb);
    int b[lb];
        printf("enter the second elemtets");
     for(int i=0;i<lb;i++)
    {
        scanf("%d i",&b[i]);
    }   
    UN(a,la,b,lb);
}
