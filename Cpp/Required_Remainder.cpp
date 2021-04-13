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
        long long int x, y, n, d;
        cin >> x >> y >> n;
        d = n / x;
        if ((d * x) + y <= n)
        {
            cout << (d * x) + y << endl;
        }
        else
        {
            cout << ((d - 1) * x) + y << endl;
        }
    }
    return 0;
}
