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
		double x1, x2;
		long long int a, n, b;
		cin >> a >> n;
		x1 = (a + sqrt((a * a) - 4)) / 2;
		x2 = (a - sqrt((a * a) - 4)) / 2;
		b = ((pow(x1, 2 * n) + 1) / pow(x1, n));
		// 		cout <<"b:" <<  b << endl;
		b %= 1000000007;
		cout << b << endl;
	}
	return 0;
}