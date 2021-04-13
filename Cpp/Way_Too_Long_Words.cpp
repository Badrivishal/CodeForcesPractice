#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    string a, temp;
    int i,n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        a.clear();
        temp.clear();
        cin >> a;
        if(a.length()>10)
        {
            temp.push_back(a[0]);
            temp.append(to_string(a.length()-2));
            temp.push_back(a[a.length()-1]);
            a = temp;
        }
        cout << a << endl;
    }
    return 0;
}