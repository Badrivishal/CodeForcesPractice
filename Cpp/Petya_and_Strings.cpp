#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    string a,b;
    cin >> a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    cin >> b;
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    // int out = strcmp(a,b);
    int out = a.compare(b);
    if(out < 0)
        out = -1;
    else if (out > 0)
    {
        out = 1;
    }
    
    cout << out << endl; 
    return 0;
}