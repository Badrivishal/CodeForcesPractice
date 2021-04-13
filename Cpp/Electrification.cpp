#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, i, out1, out2, sum1 = 0;
        cin >> n >> k;
        long long int a[n], dist[n-1];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i)
            {
                dist[i - 1] = a[i] - a[i - 1];
            }
        }

    }


    return 0;
}
