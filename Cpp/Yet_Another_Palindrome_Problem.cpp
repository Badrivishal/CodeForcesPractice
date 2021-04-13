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
		int n, j, k, br_flag;
		cin >> n;
		int a[n];
		br_flag = 0;
		for (j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		for (j = 0; j < n; j++)
		{
			for (k = j + 2; k < n; k++)
			{
				//   cout << "-------" << a[j] << " " << a[k] << endl;
				if (a[j] == a[k])
				{
					// cout << "j" << j << " k " << k << endl;
					br_flag = 1;
					break;
				}
			}
			if (br_flag == 1)
			{
				break;
			}
		}
		if (br_flag == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

	}
	return 0;
}