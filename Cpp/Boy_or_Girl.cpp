#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int a [26] = {0};
    int i, out=0;
    string n;
    cin >> n;
    for(i=0;i<n.length();i++)
    {
        // cout << (int)n[i] << endl;
        if (a[(int)n[i]-97]==0)
            a[(int)n[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        out+=a[i];
    }
    // cout << out;
    if(out%2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}