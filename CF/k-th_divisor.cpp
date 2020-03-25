#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
    long long int n, k, i;
    vector <long long> a;
    cin >> n >> k;
    for(i=1;i<sqrt(n);i++)
    {
        if(n%i == 0)
        {
            // a.push_back(i);
            a.push_back(n/i);
            k--;
            if(k==0)
            {
                break;
            }
            // cout << "i: "<< i << " k: "<< k << endl;
        }
    }
    // cout << i << endl;
    if((long long)sqrt(n) * (long long)sqrt(n) == n )
    {
        // cout << "HI"  << endl;
        a.push_back(sqrt(n));
    }
    
    

    if(k == 0)
    {
        cout << i << endl;
    }
    else
    {
        // cout << "Hi" << endl;
        // fflush(stdout);1
        if(k>a.size())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[a.size()-k] << endl;
        }
        
    }
    
    return 0;
}