#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main() 
{
    int n,i,q,temp, j, flag;
    cin >> n; 
    // vector <int> a;
    int a[100002] = {0};
    for(i=1;i<=n;i++)
    {
        cin >> temp;
        a[temp] = i;
    }
    cin >> q;
    int qi, ind, count, temp1, k;
    // vector <int> query;
    unsigned long long left, right;
    left = 0;
    right = 0;
    for(i=0;i<q;i++)
    {
        cin >> qi;
        left += a[qi];
        right += n-a[qi]+1;
    }

    // for(i=0;i<q;i++)
    // {
    //     cout << query[i];
    // }
    // cout << endl;

    // k = 0;
    
    // while(k<query.size())
    // {
    //     temp1 = query[k];
    //     count = 0;
    //     j=0;
    //     while(j<query.size())
    //     {
    //         if(query[j] == temp1)
    //         {
    //             query.erase(query.begin() + j);
    //             count++;
    //             j--;
    //         }
    //         j++;
    //     }
    //     for(i=0;i<(n/2)+1;i++)
    //     {
    //         if(a[i]==temp1)
    //         {
    //             left += (i+1)*count;
    //             right += (n-i)*count;
    //             k--;
    //             break;
    //         }
    //         else if(a[n - 1 - i] == temp1)
    //         {
    //             left += (n-i)*count;
    //             right += (i+1)*count;
    //             k--;
    //             break;
    //         }
    //     }
    //     k++;
    // }



    cout << left << " " << right << endl;
    return 0;
}


