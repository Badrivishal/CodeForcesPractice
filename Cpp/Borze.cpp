#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int i;
    string a("A");
    vector <int> res;
    cin >> a;
    int l = a.length();
    for(i=0;i<l;i++)
    {
        if(a[i]=='-'&&a[i+1]=='.')
        {
            a[i]=a[i+1]='0';
            res.push_back(1);
        }
        else if(a[i]=='-'&&a[i+1]=='-')
        {
            a[i]=a[i+1]='0';
            res.push_back(2);
        }
        else if(a[i]=='.')
        {
            a[i]='0';
            res.push_back(0);
        }
    }
    for(i=0;i<res.size();i++)
    {
        cout << res[i];
    }
    return 0;
}