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
		int n, k, i;
		cin >> n >> k;
		int a[n], b[n], sorted[2 * n], sum1 = 0, swaps, j;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			sorted[i] = a[i];
		}
		for (i = 0; i < n; i++)
		{
			cin >> b[i];
			sorted[n + i] = b[i];
		}
		sort(a, a + n);
		sort(b, b + n);
		swaps = 1;
		for (i = 0; i < k && i < n && swaps; i++)
		{
			swaps = 0;
			for (j = 0; j < n; j++)
			{
				if (a[i] < b[n - j - 1])
				{
					swaps = 1;
					swap(a[i], b[n - j - 1]);
					break;
				}
			}
		}
		sum1 = accumulate(a, a + n, sum1);
		cout << sum1 << endl;

	}
	return 0;
}