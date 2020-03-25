// max element in an array using recursion

#include<stdio.h>

int max(int * a, int n, int len)
{
    if(n==len-1)
    {
        return a[n];
    }
    else
    {
        int max1 = max(a, n+1, len);
        if(a[n]>max1)
            return a[n];
        else
        {
            return max1;
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
    printf("%d", max(a, 0, 5));
    return 0;
}