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
        long long int n, k, i;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            n += (2 * k);
        }
        else
        {
            int flag = 1;
            for (i = 3; i <= sqrt(n); i += 2)
            {
                if (n % i == 0)
                {
                    n += i;
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                n *= 2;
            }
            n += (2 * (k - 1));
        }
        cout << n << endl;
    }
    return 0;
}