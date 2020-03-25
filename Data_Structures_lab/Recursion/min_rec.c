// min element in an array using recursion

#include<stdio.h>

int min(int * a, int n, int len)
{
    if(n==len-1)
    {
        return a[n];
    }
    else
    {
        int min1 = min(a, n+1, len);
        if(a[n]<min1)
            return a[n];
        else
        {
            return min1;
        }
    }
}

int main()
{
    int i;
    int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", min(a, 0, 5));
    return 0;
}