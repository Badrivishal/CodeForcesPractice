#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    string a;
    cin >> a;
    int i;
    int flag = 0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}