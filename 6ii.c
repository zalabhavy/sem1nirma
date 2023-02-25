#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter your string");
    gets(str);
    int n;
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(len%2==0)
        {
            n = len ;
        }
        else
        {
           n = len-1 ;
        }
        for(int i=0;i<n;i=i+2)
        {
            int temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
    }
    printf("Your modified string is:%s",str);
    return 0;
}