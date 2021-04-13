#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

void swap1(int * a1, int a, int b)
{
    int temp;
    temp = a1[a];
    a1[a] = a1[b];
    a1[b] = temp;
}

int main() 
{
    int t, i;
    cin >> t;
    string a, b;
    for(i=0;i<t;i++)
    {
        int j, k, min, ind;

        cin >> a >> b;
        int arr1[a.size()];
        int arr2[b.size()];

        for(j=0;j<a.size();j++)
        {
            arr1[j] = int(a[j]);
        }
        for(j=0;j<b.size();j++)
        {
            arr2[j] = int(b[j]);
        }

        // for(j=0;j<b.size();j++)
        // {
        //     cout << char(arr2[j]);
        // }
        int flag = 0;
        for(j=0;j<a.size()&&j<b.size();j++)
        {
            if(arr1[j]<arr2[j])
            {
                cout << a << endl;
                flag = 1;
                break;
            }
            else if (arr1[j]>arr2[j])
            {
                min = 200;
                for(k=j;k<a.size();k++)
                {
                    if(arr1[k] <= arr2[j])
                    {
                        swap1(arr1, j, k);
                        for(k=0;k<a.size();k++)
                        {
                            cout << char(arr1[k]);
                        }
                        cout << endl;
                        flag = 1;
                        min = 0;
                        break;
                    }
                }
                if(min == 0)
                {
                    break;
                }
                if(min == 200)
                {
                    for(k=0;k<j;k++)
                    {
                        int l;
                        for(l=k;l<a.size();l++)
                        {
                            if(arr1[l] < arr1[k])
                            {
                                swap1(arr1, k, l);
                                // cout << "Hi " << char(arr1[k]) << " " << char(arr1[l])<< endl;
                                for(k=0;k<a.size();k++)
                                {
                                    cout << char(arr1[k]);
                                }
                                cout << endl;
                                flag = 1;
                                min = 0;
                                break;
                            }
                        }
                        if(min == 0)
                        {
                            break;
                        }
                    }
                }
                if(min == 0)
                {
                    break;
                }
                if(min == 200)
                {
                    cout <<"---"<< endl;
                    flag = 1;
                    break;
                }
                // else
                // {
                //     swap1(arr1, j, ind);
                //     for(j=0;j<a.size();j++)
                //     {
                //         cout << char(arr1[j]);
                //     }
                //     cout << endl;
                //     flag = 1;
                //     break;
                // }
            }
        }
        if(flag == 0)
        {
            if(a.size()<b.size())
                cout << a << endl;
            else
                cout << "---" << endl;
        }


    }
    return 0;
}