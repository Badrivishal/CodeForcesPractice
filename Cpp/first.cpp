#include <iostream>

using namespace std;

int main()
{
    unsigned long int l, m, n, out;
    cin >> l;
    cin >> m;
    cin >> n;
    out = n*2;
    // if(l>=m)
    // {
    //     out+=(l-m+1)*2;
    //     cout << 1 << out << endl;
    // }
    // else if(l<m)
    // {
    //     out+=(m-l+1)*2;
    //     cout << 2 << out << endl;
    // }
    if(m-l>=1)
    {
        out+=1; 
        // cout << 3 << out << endl;
        out += 2*l;
    }
    else if(l-m>=1)
    {
        out+=1;
        out+=2*m;
    }
    else if(l-m == 0)
    {
        out+=2*m;
    }

    cout << out << endl;
    return 0;
}