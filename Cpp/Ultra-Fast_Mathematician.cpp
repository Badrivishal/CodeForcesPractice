#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

# define M 100

int main() 
{
    string a,b;
    cin >>a;
    cin >>b;
    int i;
    for(i=0;i<a.length();i++)
    {
        if(a[i]=='1')
        {
            if(b[i]=='1')
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        else
        {
            if(b[i]=='1')
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            
        }
        
    }
    return 0;
}