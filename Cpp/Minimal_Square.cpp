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
		int a, b, max1, min1;
		cin >> a >> b;
		min1 = min(a, b);
		max1 = max(a, b);
		if (max1 < 2 * min1)
		{
			cout << 4 * min1 * min1 << endl;
		}
		else
		{
			cout << max1 * max1 << endl;
		}
	}
	return 0;
}