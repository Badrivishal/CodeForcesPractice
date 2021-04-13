#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <iomanip>

using namespace std;


int main()
{
    long long int n, t, i, j = 0, sum1 = 0, max1 = 0;
    cin >> n >> t;
    long long int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        // cout << i << endl;
        while (j < n)
        {
            if (sum1 + a[j] <= t)
            {
                sum1 += a[j];
                j++;
            }
            else
            {
                break;
            }
            // cout << "Hi" << endl;
        }
        max1 = max(max1, j - i);
        sum1 -= a[i];
        // cout << max1 << endl;
    }
    cout << max1 << endl;
    return 0;
}