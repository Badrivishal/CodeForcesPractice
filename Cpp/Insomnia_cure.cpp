#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int k, l, m, n, d, i;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int count = 0;
    for(i = 1; i <= d; i ++)
    {
        if(i%k==0)
        {
            count ++;
            continue;
        }
        else if(i%l==0)
        {
            count ++;
            continue;
        }
        else if(i%m==0)
        {
            count ++;
            continue;
        }
        else if(i%n==0)
        {
            count ++;
            continue;
        }
    }
    cout << count << endl;
    return 0;
}