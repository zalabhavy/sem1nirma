#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter a string:");
    gets(str);
    char ch;
    printf("Enter element you want to delete:");
    scanf("%c",&ch);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            for(int j=i;j<len;j++)
            {
                str[j] = str[j+1];
            }
            // len--;
            // i--;
        }
    }
    printf("After removing element string: %s",str);
    return 0;
}