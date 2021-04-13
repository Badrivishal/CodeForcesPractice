#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int n, i,count=0;
    cin >> n;
    string a;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(a[1]=='+')
            count++;
        else
            count--;
    }
    cout << count;
    return 0;
}