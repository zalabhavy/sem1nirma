#include<stdio.h>
#include<string.h>
void function(char a[])
{
    int b[26];
    for(int i = 0; i < 26; i++)
    b[i] = 0;
    for(int i = 0; i < strlen(a); i++)
        {
        int d = a[i];
        if(d < 91)
            {
            b[d - 65]++;
            }
        else
            {
            b[d - 97]++;
            }
        }
    int k = 0;
    for(int i = 0; i < 26; i++)
        {
        if(b[i] > 1)
        k++;
        }
        if(k == 0)
        printf(" None of the character are repeating");
        else
            {
            for(int i = 0; i < 26; i++)
            if(b[i] > 1)
            printf("%c is repeating %d times.\n", i + 97, b[i]);
            }

}
void main()
{
    char a[30];
    printf("Enter any Name:\n");
    gets(a);
    function(a);
}
