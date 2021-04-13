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
        long long int n, k, i, mod_val;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            // a[i] = 200000;
            a[i] = a[i] % k;
        }
        if (k == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(a, a + n);
        int c = 0;
        int max1 = 0;
        mod_val = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                c++;
                if (max1 < c && a[i] != 0)
                {
                    max1 = c;
                    mod_val = a[i];
                }
                // cout << "---------" << c << " " << mod_val << endl;
                c = 0;
            }
            else
            {
                c++;
            }
        }
        c++;
        if (max1 < c && a[i] != 0)
        {
            max1 = c;
            mod_val = a[i];
        }
        // cout << "---------" << c << mod_val << endl;
        c = 0;
        if (mod_val != 0)
            cout << ((max1 - 1) * k) + (k - mod_val + 1) << endl;
        else
            cout << 0 << endl;
    }


    return 0;
}
