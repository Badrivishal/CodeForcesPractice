#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int n, i, count=0;
    cin >> n;
    string a("A");
    cin >> a;
    for(i=0;i<n-1&&i<a.length();i++)
    {
        if(a[i]==a[i+1])
        {
            count ++;
        }
    }
    cout << count << endl; 
    return 0;
}