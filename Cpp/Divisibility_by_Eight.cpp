#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <iomanip>

using namespace std;


int main()
{
    string s;
    int n, i, j, k;
    int u, t, h, num1;
    cin >> s;
    s = "00" + s;
    n = s.length();
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                h = s[i] - '0';
                t = s[j] - '0';
                u = s[k] - '0';
                num1 = h * 100 + t * 10 + u;
                if (num1 % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << num1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}