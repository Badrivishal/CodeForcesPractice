#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n, i, j, eve, odd;
    cin >> n;
    int a[n];
    eve = 0;
    odd = 0;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            eve++;
        }
        else
        {
            odd++;
        }
    }
    if (eve && odd)
    {
        sort(a, a + n);
    }
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}