#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    string inp1,inp2,oup; 
    int flag=0;
    cin >> inp1;
    cin >> inp2;
    cin >> oup;
    int i;
    int a1 [26] = {0};
    int a2 [26] = {0};
    for(i=0;i<inp1.length();i++)
    {
        a1[(int)inp1[i]-65]++;
        // cout << (int)inp1[i] << endl;
    }
    for(i=0;i<inp2.length();i++)
    {
        a1[(int)inp2[i]-65]++;
    }
    for(i=0;i<oup.length();i++)
    {
        a2[(int)oup[i]-65]++;
    }
    for(i=0;i<26;i++)
    {
        if(a1[i] != a2[i])
            flag = 1;
    }
    if(flag == 0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}