#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
    int i;
    long long int pwr2[28];
    long long int pwr3[28];
    pwr2[0] = 1;
    pwr3[0] = 1;
    for (i = 1; i < 28; i++)
    {
        pwr2[i] = pwr2[i - 1] * 2;
        pwr3[i] = pwr3[i - 1] * 3;
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int max2, max3;
        for (i = 0; i < 28; i++)
        {
            if (n % pwr2[i] != 0)
            {
                max2 = i - 1;
                break;
            }
        }
        for (i = 0; i < 28; i++)
        {
            if (n % pwr3[i] != 0)
            {
                max3 = i - 1;
                break;
            }
        }
        if (max3 >= max2)
        {
            if (pwr3[max3] * pwr2[max2] == n)
            {
                cout << max3 + (max3 - max2) << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
