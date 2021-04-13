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
        int n, i, op, cl, cnt;
        string str;
        cin >> n >> str;
        op = cl = cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                op++;
            }
            else if (str[i] == ')')
            {
                if (op > 0)
                {
                    op--;
                }
                else
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
