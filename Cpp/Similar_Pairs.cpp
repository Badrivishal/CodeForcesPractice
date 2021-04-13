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
		int i, n, eve, odd, flag;
		cin >> n;
		int a[n];
		eve = 0;
		odd = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 2 == 0)
			{
				eve++;
			}
			else
			{
				odd++;
			}
		}
		if ((eve % 2 == 0 && odd % 2 == 1) || (eve % 2 == 1 && odd % 2 == 0))
		{
			cout << "NO" << endl;
		}
		else
		{
			if (eve % 2 == 0 && odd % 2 == 0)
			{
				cout << "YES" << endl;
			}
			else
			{
				sort(a, a + n);
				flag = 0;
				for (i = 0; i < n; i++)
				{
					if (a[i] + 1 == a[i + 1])
					{
						flag = 1;
						break;
					}
				}
				if (flag)
				{
					cout << "YES" << endl;
				}
				else
				{
					cout << "NO" << endl;
				}
			}
		}
	}
	return 0;
}