#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    int toggle=0;
    printf("Please input a sample string:");
    gets(s);
    for (int i='a';i<='z';i++)
    {
        int count=0;
        for (int k=0;k<strlen(s);k++)
        {
            if (tolower(s[k])==i)
            {
                count++;
            }
        }
        if (count>1)
        {
            printf("%c is repeating %d times,",i,count);
            toggle++;
        }
    }
    if (toggle==0)
    {
        printf("None of them are repeating.");
    }
}