#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int t, i;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		long long int x, y, a, b, test1, test2;
		cin >> x >> y >> a >> b;
		test1 = (min(x, y) * b) + ((max(x, y) - min(x, y)) * a);
		test2 = (x * a) + (y * a);
		cout << min(test1, test2) << endl;
	}
	return 0;
}