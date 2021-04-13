#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int n,i,t,j;
    string a("A");
    cin >> n;
    cin >> t;
    cin >> a;
    int b[n] = {0};
    vector<int> index;
    for(i=0;i<t;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a.at(j) == 'G' && a.at(j-1) == 'B')
            {
                index.push_back(j);
            }
        }
        for(j=0;j<index.size();j++)
        {
            a[index[j]] = 'B';
            a[index[j]-1] = 'G';
        }
        index.clear();
    }
    cout << a << endl;
    return 0;
}