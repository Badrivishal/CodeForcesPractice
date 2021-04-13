#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string a("A");
    cin >> a;
    int i;
    int count = 0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='4'||a[i]=='7')
        {
            count ++;
        }
    }
    if(count == 4||count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}