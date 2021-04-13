#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
    int n, k, i, temp1, c1, c2;
    cin >> n >> k;
    vector <int> l1, l2, l12, l0, incl;
    for (i = 0; i < n; i++)
    {
        cin >> temp1 >> c1 >> c2;
        if (c1 == 0 && c2 == 0)
        {
            l0.push_back(temp1);
        }
        else if (c1 == 0 && c2 == 1)
        {
            l2.push_back(temp1);
        }
        else if (c1 == 1 && c2 == 0)
        {
            l1.push_back(temp1);
        }
        else
        {
            l12.push_back(temp1);
        }
    }
    sort(l0.begin(), l0.end());
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    sort(l12.begin(), l12.end());

    // cout << "l0: ";

    // for(i=0;i<l0.size();i++)
    // {
    //     cout << l0[i] << " ";
    // }
    // cout << endl;

    // cout << "l1: ";

    // for(i=0;i<l1.size();i++)
    // {
    //     cout << l1[i] << " ";
    // }
    // cout << endl;

    // cout << "l2: ";

    // for(i=0;i<l2.size();i++)
    // {
    //     cout << l2[i] << " ";
    // }
    // cout << endl;

    // cout << "l12: ";

    // for(i=0;i<l12.size();i++)
    // {
    //     cout << l12[i] << " ";
    // }
    // cout << endl;

    while (l1.size() > k)
    {
        l1.pop_back();
    }
    while (l2.size() > k)
    {
        l2.pop_back();
    }
    i = 0;
    // cout << "Hi" << endl;

    if (l1.size() >= k && l2.size() >= k && l12.size() > 0)
    {
        // cout << "Hi " << *(l1.end()-1) << " " << *(l2.end()-1) << endl;
        while (l1[l1.size() - 1] + l2[l2.size() - 1] > l12[i] && i < l12.size() && i < k)
        {
            incl.push_back(l12[i]);
            l1.pop_back();
            l2.pop_back();
            if ((l1.size() == 0) && (l2.size() == 0) && (i == (l12.size() - 1)))
            {
                break;
            }
            i++;
            // cout << "Hoi " << i << endl;
        }
    }
    int len1, len2;
    len1 = l1.size() + incl.size();
    len2 = l2.size() + incl.size();
    while ((len1 < k || len2 < k) && i < l12.size() && i < k)
    {
        incl.push_back(l12[i]);
        len1++;
        len2++;
        if (len1 > k)
        {
            l1.pop_back();
        }
        if (len2 > k)
        {
            l2.pop_back();
        }
        i++;
    }

    // cout << "l2: ";

    // for(i=0;i<l2.size();i++)
    // {
    //     cout << l2[i] << " ";
    // }
    // cout << endl;

    // cout << "l1: ";

    // for(i=0;i<l1.size();i++)
    // {
    //     cout << l1[i] << " ";
    // }
    // cout << endl;

    // cout << "incl: ";

    // for(i=0;i<incl.size();i++)
    // {
    //     cout << incl[i] << " ";
    // }
    // cout << endl;


    if (len1 >= k && len2 >= k)
    {
        int sum1 = 0;
        for (i = 0; i < l1.size(); i++)
        {
            sum1 += l1[i];
        }
        for (i = 0; i < l2.size(); i++)
        {
            sum1 += l2[i];
        }
        for (i = 0; i < incl.size(); i++)
        {
            sum1 += incl[i];
        }

        cout << sum1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
