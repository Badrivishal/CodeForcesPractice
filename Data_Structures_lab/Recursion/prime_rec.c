// Checks if a number is prime using recursion

#include<stdio.h>

int prime(int n, int m)
{
    if(m>n/2)
        return 1;
    else if(n%m==0)
        return 0;
    else
    {
        prime(n, m+1);
    }
    
}

int main()
{
    int i;
    scanf("%d", &i);
    printf("%s", prime(i, 2)?"Prime":"Not Prime");
    return 0;
}