#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <iomanip>
#include <bits/stdc++.h> 

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, min1, max1;
        cin >> a >> b;
        min1 = min(a, b);
        max1 = max(a, b);
        int count1 = 0;
        while (min1 < max1)
        {
            min1 = min1 << 1;
            // cout << "m:" << min1 << endl;
            count1++;
        }
        if (min1 == max1)
        {
            cout << ceil((float)count1 / 3) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}