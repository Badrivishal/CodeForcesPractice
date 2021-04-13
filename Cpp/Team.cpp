#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int n, i, a, b, c, count=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        if((a && b)||(b && c)||(c && a))
            count ++;
    }
    cout << count;
    return 0;
}