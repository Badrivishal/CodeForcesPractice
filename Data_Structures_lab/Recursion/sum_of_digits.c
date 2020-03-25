// Prints the sum of digits of a number using recursion

#include<stdio.h>

int sum(int a, int s)
{
    if(a>0)
    {
        sum(a/10, s+(a%10));
    }
    else
    {
        return s;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n, 0));
    return 0;
}