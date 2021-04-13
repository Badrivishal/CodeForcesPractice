#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	long long int n, m, i, j, type, sum1, l, r;
	cin >> n;
	long long int u[n];
	long long int v[n];
	u[0] = v[0] = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> v[i];
		u[i] = v[i];
		if (i)
			v[i] += v[i - 1];

	}
	sort(u, u + n);
	for (i = 1; i <= n; i++)
	{
		u[i] += u[i - 1];
	}
	// 	cout << endl;
// 		for( i=0;i<=n;i++)
// 		{
// 		    cout << u[i] << " ";
// 		}
// 		cout << endl;
// 		for( i=0;i<=n;i++)
// 		{
// 		    cout << v[i] << " ";
// 		}
// 		cout << endl;
	cin >> m;
	for (i = 0; i < m; i++)
	{
		sum1 = 0;
		cin >> type >> l >> r;
		if (type - 1)
		{
			sum1 = u[r] - u[l - 1];
		}
		else
		{
			sum1 = v[r] - v[l - 1];
		}
		cout << sum1 << endl;
	}

	return 0;
}