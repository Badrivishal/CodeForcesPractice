#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int i,ones,two,three;
    ones = two =0;
    string a;
    cin >> a;
    for(i=0;i<a.length();i+=2)
    {
        if(a[i]=='1')
        {
            ones ++;
        }
        else if (a[i] == '2')
        {
            two++;
        }
    }
    for(i=0;i<(a.length()/2)+1;i++)
    {
        if(i<ones)
            cout << '1';
        else if (i<ones+two)
        {
            cout << '2';
        }
        else
        {
            cout << '3';
        }
        if(i!=(a.length()/2))
            cout << '+';
    }
    return 0;
}