#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
    int n, i, j, cnt = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < 0)
            {
                continue;
            }
            if (abs(a[i]) <= 2 * a[j] && abs(a[i]) >= (float)a[j] / 2)
            {
                cnt++;
                // cout << a[j] << " " << a[i] << endl;
            }
            else if (a[i] > 2 * a[j])
            {
                break;
            }
            // cout << a[j] << " " << a[i] << endl;
        }
    }
    cout << cnt << endl;

    return 0;
}
