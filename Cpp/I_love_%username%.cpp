#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int a,i, min1, max1, temp1, count1;
    cin >> a;
    cin >> min1;
    max1 = min1;
    count1 = 0;
    for(i=0;i<a-1;i++)
    {
        cin >> temp1;
        if(temp1<min1)
        {
            min1 = temp1;
            count1 ++;
        }
        else if(temp1> max1)
        {
            max1 = temp1;
            count1 ++;
        }
    }
    cout << count1 << endl;
    return 0;
}