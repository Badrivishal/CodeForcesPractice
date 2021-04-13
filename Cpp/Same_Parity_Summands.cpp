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
		int i;
		long long int n, k;
		cin >> n >> k;
		if (n % 2 == 1 && k % 2 == 0)
		{
			cout << "NO" << endl;
			continue;
		}
		else if (n % 2 == 1 && n >= k)
		{
			cout << "YES" << endl;
			for (i = 0; i < k - 1; i++)
			{
				cout << 1 << " ";
			}
			cout << n - k + 1 << endl;
		}
		else if (n % 2 == 1 && n < k)
		{
			cout << "NO" << endl;
		}
		else if (n % 2 == 0 && 2 * k <= n)
		{
			cout << "YES" << endl;
			for (i = 0; i < k - 1; i++)
			{
				cout << 2 << " ";
			}
			cout << n - (2 * (k - 1)) << endl;
		}
		else if (n % 2 == 0 && k % 2 == 0 && n >= k)
		{
			cout << "YES" << endl;
			for (i = 0; i < k - 1; i++)
			{
				cout << 1 << " ";
			}
			cout << n - k + 1 << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

	}
	return 0;
}