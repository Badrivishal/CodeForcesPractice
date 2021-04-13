#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;


int main() 
{
    int len, i, min_pos, max_pos, min1, max1;

    cin >> len;

    int a[len] = {0};

    min1 = 101;
    max1 = 0;

    for(i=0;i<len;i++)
    {
        cin >> a[i];
        if (a[i] > max1)
        {
            max1 = a[i];
            max_pos = i;
        }
    }
    for(i = len-1;i>=0;i--)
    {
        if (a[i] < min1)
        {
            min1 = a[i];
            min_pos = i;
        }
    }
    // cout << max_pos << min_pos << endl;
    if (max_pos<min_pos)
    {
        cout << max_pos + len - min_pos - 1 << endl;
    }
    else
    {
        cout << max_pos + len - min_pos - 2 <<endl;
    }
    
    return 0;
}