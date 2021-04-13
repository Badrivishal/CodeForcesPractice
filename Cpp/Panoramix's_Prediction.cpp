#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    vector <int> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int flag = 0;
    int n,m,i;
    cin >> n;
    cin >> m;
    for(i=0;i<prime.size();i++)
    {
        if(prime[i]==n&&prime[i+1]==m)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
    