#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	char temp;
	int n, m, i, j;
	int b = 0;
	cin >> n >> m;
	char a[n][m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i > 0)
			{
				if (a[i - 1][0] == 'B' && j == 0)
				{
					b = 1;
					// cout << "Hi1" << endl;
				}
				else if (j == 0)
				{
					// cout << "Hi2" << endl;
					b = 0;
				}
			}
			if (b % 2 == 0)
			{
				a[i][j] = 'B';
			}
			else
			{
				a[i][j] = 'W';
			}
			b++;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> temp;
			if (temp == '.')
			{
				cout << a[i][j];
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
	}

	return 0;
}