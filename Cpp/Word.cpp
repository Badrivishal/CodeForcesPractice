#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string a("A");
    cin >> a;
    int i;
    int is_even;
    vector <int> cap;
    for(i=0;i<a.length();i++)
    {
        if(int(a[i])>=65&&a[i]<=90)
        {
            cap.push_back(i);
        }
    }
    
    int j=0;
    int half;
    if(a.length()%2==0)
    {
        half = a.length()/2;
        is_even = 1;
    }
    else
    {
        half = int((a.length()/2))+1;
        is_even = 0;
    }
    if(cap.size()!=0)
    {
        if(cap.size()==half&&is_even==0)
        {
            for (i=0;i<a.length();i++)
            {
                if(cap[j]==i)
                {
                    j++;
                    continue;
                }
                else
                {
                    a[i]-=(97-65);              //makes all caps
                }
            }
        }
        else if(cap.size()==half&&is_even==1)
        {
            for (i=0;i<a.length();i++)
            {
                if(cap[j]==i)
                {
                    a[i]+=(97-65);              //makes all small
                    j++;
                }
                else
                {
                    continue;
                }
            }
        }
        else if(cap.size()>half)
        {
            for (i=0;i<a.length();i++)
            {
                if(cap[j]==i)
                {
                    j++;
                    continue;
                }
                else
                {
                    a[i]-=(97-65);              //makes all caps
                }
            }
        }
        else
        {
            for (i=0;i<a.length();i++)
            {
                if(cap[j]==i)
                {
                    a[i]+=(97-65);              //makes all small
                    j++;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    cout << a << endl;
    return 0;
}