#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;

int check_prime(int a)
{
    int i, j;
    int flag = 1; 
    for (j = 2; j <= a / 2; ++j)  
    { 
        if (a % j == 0)  
        { 
            flag = 0; 
            break; 
        } 
    } 
    if (flag == 1) 
        return 1; 
    else 
        return 0;
}


int main()
{
    int n, k, i;
    int a, b;
    cin >> n >> k;

    a = 2;
    b = 2;
    
    for(i=3; a+b+1<n && k>=0 ;i++)
    {
        if(check_prime(i) == 1)
        {
            a = b;
            b = i;
            if(check_prime(a+b+1) == 1)
            {
                k--;
                // cout << a << " " << b << endl;
            }
        }
    }

    if(k > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    

    return 0;
}