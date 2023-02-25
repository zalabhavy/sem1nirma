#include <stdio.h>
int main() 
{
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    // reversed integer is stored in reversed variable
    while (n != 0) 
    { 
        remainder = n % 10;  //121%10 == 1  2 1
        reversed = reversed * 10 + remainder;  //1 12 121
        n /= 10; //12 1 0
    }
    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else 
        {printf("%d is not a palindrome.", original);}

    return 0;
}