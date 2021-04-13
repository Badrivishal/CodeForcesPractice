#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int a,i, max1, sum1, temp1;
    max1 = sum1 = 0;

    cin >> a;

    for(i=0;i<a;i++)
    {
        cin >> temp1;
        sum1 -= temp1;
        cin >> temp1;
        sum1 += temp1;
        if (max1<sum1)
        {
            max1 = sum1;
        }
    }

    cout << max1 << endl;

    return 0;
}