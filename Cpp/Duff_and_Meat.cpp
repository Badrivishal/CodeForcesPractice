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
    int n, i, sum = 0;
    cin >> n;
    int wt[n], p[n];

    for ( i = 0; i < n; i++)
    {
        cin >> wt[i] >> p[i];
    }
    int min = p[0];
    for ( i = 0; i < n; i++)
    {
        if(p[i] < min)
        {
            min = p[i];
        }
        sum += wt[i]*min;
    }
    cout << sum << endl;
    return 0;
}