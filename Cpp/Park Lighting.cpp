#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long double x, y;
		cin >> x >> y;
		cout << (int)ceil((x * y) / 2) << endl;
	}
	return 0;
}