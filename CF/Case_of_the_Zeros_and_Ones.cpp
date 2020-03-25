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
    int n, z, o, i;
    z = 0;
    o = 0;
    cin >> n;
    char a[n];
    cin >> a;
    for(i=0;i<n;i++)
    {
        if(a[i] == '0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    cout << abs(o-z) << endl;
    return 0;
}