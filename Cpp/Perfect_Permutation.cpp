#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;


int main() 
{
    int len, i;
    cin >> len;
    if (len % 2 != 0)
    {
        cout << -1 << endl;
    }
    else 
    {
        for(i = 1; i<len+1; i++)
        {
            if (i%2 == 0)
            {
                cout << i-1 << " ";
            }
            else
            {
                cout << i+1 << " ";
            }
        }
    }

    return 0;
}