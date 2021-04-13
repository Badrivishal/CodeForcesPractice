#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main() 
{
    int n, m, i, temp1, max1, ind1;
    float temp2;
    cin >> n;
    cin >> m;
    max1 = 0;
    ind1 = n-1;
    for(i=0;i<n;i++)
    {
        cin >> temp1;
        temp2 = (float)temp1/m;
        temp1 = ceil(temp2);
        // cout << i << endl;
        if(temp1>=max1)
        {
            max1 = temp1;
            ind1 = i;
            // cout << max1 << ind1 << endl;
        }
    }
    cout << ind1+1 << endl;
    return 0;
}