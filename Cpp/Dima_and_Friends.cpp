#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main() 
{
    int n, i, temp, sum1, count;
    sum1 = 0;
    count = 0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> temp;
        sum1+=temp;
    }
    for(i=1;i<=5;i++)
    {
        if((sum1+i)%(n+1) != 1)
        {
            // cout << (sum1+i)%(n+1);
            count ++;
        }
    }
    cout << count << endl;
    return 0;
}