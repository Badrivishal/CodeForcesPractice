#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <iomanip>

using namespace std;


int main()
{
    int i, a = 0, b = 0;
    string s1, s2;
    cin >> s1;
    s2 = s1;
    for (i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'A')
        {
            if (i + 1 < s1.length())
            {
                if (s1[i + 1] == 'B')
                {
                    a += 1;
                    s1[i] = s1[i + 1] = '0';
                    break;
                }
            }
        }
    }
    for (i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'B')
        {
            if (i + 1 < s1.length())
            {
                if (s1[i + 1] == 'A')
                {
                    a += 1;
                    s1[i] = s1[i + 1] = '0';
                    break;
                }
            }
        }
    }

    for (i = 0; i < s2.length(); i++)
    {
        if (s2[i] == 'B')
        {
            if (i + 1 < s2.length())
            {
                if (s2[i + 1] == 'A')
                {
                    b += 1;
                    s2[i] = s2[i + 1] = '0';
                    break;
                }
            }
        }
    }
    for (i = 0; i < s2.length(); i++)
    {
        if (s2[i] == 'A')
        {
            if (i + 1 < s2.length())
            {
                if (s2[i + 1] == 'B')
                {
                    b += 1;
                    s2[i] = s2[i + 1] = '0';
                    break;
                }
            }
        }
    }

    if (a == 2 || b == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}