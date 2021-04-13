#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main() 
{
    int t, i;
    cin >> t;
    // char a[1000];
    string b, sub;
    string fil = "po";
    string jap1 = "desu";
    string jap2 = "masu";
    string kor = "mnida";
    for(i=0;i<t;i++)
    {
        cin >> b;
        if(b.size()>=2)
        {
            // cout << "Hi" << endl;
            // if(a[strlen(a)-2])
            sub = b.substr(b.size()-2, b.size());
            // cout << sub << endl;
            if(sub == fil)
            {
                cout << "FILIPINO" << endl;
                // continue;
            }
        }
        if(b.size()>=4)
        {
            sub = b.substr(b.size()-4, b.size());
            // cout << sub << endl;
            if(sub == jap1 || sub == jap2)
            {
                cout << "JAPANESE" << endl;
                // continue;
            }
        }
        if(b.size()>=5)
        {
            sub = b.substr(b.size()-5, b.size());
            // cout << sub << endl;
            if(sub == kor)
            {
                cout << "KOREAN" << endl;
                // continue;
            }
        }
    }
    
    return 0;
}