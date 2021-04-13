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
		int i, j, k, n, sum1, count1;
		cin >> n;
		int a[n], chk[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			chk[i] = a[i];
		}
		count1 = 0;
		for (i = 0; i < n - 1; i++)
		{
			sum1 = a[i];
			for (j = i + 1; j < n; j++)
			{
				sum1 += a[j];
				for (k = 0; k < n; k++)
				{
					if (sum1 == chk[k])
					{
						// cout <<"a:" << a[k] << endl;
						chk[k] = -1;
						count1 += 1;
					}
				}
			}
		}
		cout << count1 << endl;
	}
	return 0;
}