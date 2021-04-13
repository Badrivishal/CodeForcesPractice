#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

#define PI 3.141592653589793238

using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long double n;
		cin >> n;
		n = 2 * n;
		long double out;
		out = (long double)1;
		// 		cout << out <<endl;
		out /= sin(PI / n);
		printf("%Lf\n", out);
	}
	return 0;
}