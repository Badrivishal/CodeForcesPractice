#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            break;
        }
    }
    int lower_1 = i;

    for(;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            break;
        }
    }
    int upper_1 = i;

    int flag = 0;

    for(i=0;i<n-1;i++)
    {
        if(i>= lower_1 && i <= upper_1)
        {
            continue;
        }
        if(a[i] > a[i+1])
        {
            // cout << i << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "no" << endl;
    }
    else
    {
        if(upper_1 == n-1)
        {
            if(lower_1>0)
            {
                if(a[upper_1]>a[lower_1-1])
                {
                    cout << "yes" << endl << lower_1+1 << " " << upper_1+1 << endl;
                }
                else
                {
                    cout << "no" << endl;
                }
            }
            else
            {
                cout << "yes" << endl << lower_1+1 << " " << upper_1+1 << endl;
            }
        }
        else
        {
            if(a[upper_1+1]>a[lower_1])
            {
                cout << "yes" << endl << lower_1+1 << " " << upper_1+1 << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}

