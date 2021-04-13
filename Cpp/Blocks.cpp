#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
    int n, i, w_count, b_count, flag = 1;
    w_count = 0;
    b_count = 0;
    vector <int> vec;
    cin >> n;
    string s;
    cin >> s;
    // 	cout << s << endl;fflush(stdout);
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            w_count++;
        else if (s[i] == 'B')
            b_count++;
    }
    if (w_count % 2 == 1 && b_count % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    else if (b_count == 0 || w_count == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    while (b_count && w_count)
    {
        if (flag)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (s[i] == 'W')
                {
                    w_count--;
                    b_count++;
                    s[i] = 'B';
                    if (s[i + 1] == 'B')
                    {
                        b_count--;
                        w_count++;
                        s[i + 1] = 'W';
                    }
                    else
                    {
                        w_count--;
                        b_count++;
                        s[i + 1] = 'B';
                    }
                    vec.push_back(i);
                }
            }
            flag = 0;
        }
        else if (!flag)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (s[i] == 'B')
                {
                    b_count--;
                    w_count++;
                    s[i] = 'W';
                    if (s[i + 1] == 'B')
                    {
                        b_count--;
                        w_count++;
                        s[i + 1] = 'W';
                    }
                    else
                    {
                        w_count--;
                        b_count++;
                        s[i + 1] = 'B';
                    }
                    vec.push_back(i);
                }
            }
            flag = 0;
        }
        // 	cout << s << endl;
    }
    // 	cout << s << endl;
    cout << vec.size() << endl;
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] + 1 << " ";
    }
    return 0;
}