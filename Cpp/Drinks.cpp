#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int a, i, temp, sum1=0;
    cin >> a;
    for(i=0;i<a;i++)
    {
        cin >>temp;
        sum1 = sum1 + temp;
    }
    // cout << sum1 << endl;
    double out; 
    out = (double)sum1/a;
    cout << fixed << setprecision(6) << out << endl;
    return 0;
}