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
		int n, m, j, k, br_flag, temp;
		br_flag = 0;
		cin >> n >> m;
		int a[n];
		int b[n];
		for (j = 0; j < n; j++)
		{
			cin >> a[j];
			b[j] = 0;
		}
		for (j = 0; j < m; j++)
		{
			cin >> temp;
			b[temp - 1]++;
		}
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n - 1; k++)
			{
				if (a[k] > a[k + 1])
				{
					if (b[k])
					{
						// cout << "a--" << a[k] << " " << k << endl;
						swap(a[k], a[k + 1]);
					}
					else
					{
						// cout << "--" << a[k] << " " << k << endl;
						br_flag = 1;
						break;
					}
				}
			}
			if (br_flag)
			{
				break;
			}
		}
		if (br_flag)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}