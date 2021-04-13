#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int t, i, a, b, c, d, n;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n >> a >> b >> c >> d;
		int min_wt = n * (a - b);
		int max_wt = n * (a + b);
		if ((c - d < min_wt && c + d < min_wt) || (c - d > max_wt && c + d > max_wt))
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}