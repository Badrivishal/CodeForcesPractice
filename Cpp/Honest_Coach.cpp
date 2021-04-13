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
		int n, i;
		cin >> n;
		int a[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int min_diff = INT_MAX;
		for (i = 0; i < n; i++)
		{
			if (i)
			{
				if (a[i] - a[i - 1] < min_diff)
				{
					min_diff = a[i] - a[i - 1];
				}
			}
		}
		cout << min_diff << endl;
	}
	return 0;
}