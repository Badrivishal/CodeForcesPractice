#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main() 
{
    long long int n, m;
    int a;
    cin >> n >> m >> a;

    long long int out = ceil((double)n/a) * ceil ((double)m/a);

    cout << out << endl;

    return 0;
}