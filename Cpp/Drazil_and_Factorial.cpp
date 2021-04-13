#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <iomanip>

using namespace std;


int main()
{
    int n, i, j;
    int cnt[10] = { 0 };
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            cnt[2]++;
        }
        else if (s[i] == '3')
        {
            cnt[3]++;
        }
        else if (s[i] == '4')
        {
            cnt[2] += 2;
            cnt[3]++;
        }
        else if (s[i] == '5')
        {
            cnt[5]++;
        }
        else if (s[i] == '6')
        {
            cnt[3]++;
            cnt[5]++;
        }
        else if (s[i] == '7')
        {
            cnt[7]++;
        }
        else if (s[i] == '8')
        {
            cnt[2] += 3;
            cnt[7] += 1;
        }
        else if (s[i] == '9')
        {
            cnt[2]++;
            cnt[3] += 2;
            cnt[7]++;
        }
    }
    for (i = 9; i >= 0; i--)
    {
        for (j = 0; j < cnt[i]; j++)
        {
            cout << i;
        }
    }
    return 0;
}