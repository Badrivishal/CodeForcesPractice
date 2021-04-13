#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main() 
{
    int n, k, l, c, d, p, nl, np;
    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;

    int ml,cd,p1;

    ml = k*l;

    cd = c*d;
    ml = (int)(ml/nl);
    // ml = (int)ml/n;
    p1 = (int)(p/np);

    int a;
    a = min(cd,ml);
    cout << (int)(min(a,p1)/n);
    

    return 0;
}