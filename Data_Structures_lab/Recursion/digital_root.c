// digital root is defined as summing digits until only one digit remains

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

int dig_root(int n)
{
    if(n/10>0)
    {
        dig_root(sum(n, 0));
    }
    else
    {
        return n;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", dig_root(n));
    return 0;
}

