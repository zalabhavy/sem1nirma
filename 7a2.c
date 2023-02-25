#include<stdio.h>
#include<string.h>
void function(int a[], int b[], int n,int m)
{
    printf("Union  of two array is:\n");    
    for(int   i = 0;   i < n;   i++)
        {
    printf("%d ", a[i]);
        }
        for(int   i = 0;   i < m;   i++)
            {
            int k = 0;
            for(int j = 0; j < n; j++)
                {
                if(b[i] == a[j])
                    {
                    k = 1;
                    break;
                    }
                }
                if(k == 0) 
                printf("%d ", b[  i]);
{            printf("\nIntersection  of two array is:\n");
            if(n < m)
                {
                for(int   i = 0;   i < n;   i++)
                    {
                    for(int j = 0; j < m; j++)
                        {
                        if(a[  i] == b[j])
                            {
                            printf("%d ", a[  i]); 
                            break;
                            }
                        }
                    }
                }
            else
                {
                for(int   i = 0;   i < m;   i++)
                    {
                    for(int j = 0; j < n; j++)
                        {
                        if(b[  i] == a[j])
                            {
                            printf("%d ", b[  i]); 
                            break;
                            }
                        }
                    }
                }

}
int main()
    {
    printf("Enter the no of element of two array:\n");
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr[n], brr[m];
    printf("Enter elements of array 1:\n");
    for(int   i = 0;   i < n;   i++)
        {
        scanf("%d", &arr[  i]);
        }
    printf("Enter elements of array 2:\n");
    for(int   i = 0;   i < m;   i++)
        {
        scanf("%d", &brr[  i]);
        }
    function(arr, brr, n, m);
    return 0;
}
            }
}