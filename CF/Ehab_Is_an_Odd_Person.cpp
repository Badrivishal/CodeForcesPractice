#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;

// void swap(int * , int , int );

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", a+i);
    }
    // for(i=0;i<n;i++)
    // {
    //     printf("%d ", a[i]);
    // }
    // fflush(stdout);
    // for(i=0;i<n;i++)
    // {
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j]&&((a[i]+a[j])%2 == 1))
    //         {
    //             // printf("%d %d", i, j);
    //             swap(a, i, j);
    //         }
    //     }
    // }
    sort(a, a+n);
    
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

// void swap(int * a, int i, int j)
// {
//     int temp;
//     temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;
// }
