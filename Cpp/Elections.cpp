#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int n, m, temp1, i, j;
	cin >> n >> m;
	int a[n];
	int total[n];
	int max1 = 0;
	int indx = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = 0;
		total[i] = 0;
	}
	for (i = 0; i < m; i++)
	{
		max1 = 0;
		indx = 0;
		for (j = 0; j < n; j++)
		{
			cin >> a[j];
			if (a[j] > max1)
			{
				max1 = a[j];
				indx = j;
			}
		}
		total[indx]++;
	}
	// 	for ( i = 0; i < n; i++)
	// 	{
	// 	    cout << a[i] << " ";
	// 	}
	// 	cout << endl;

	max1 = 0;
	indx = 0;

	for (i = 0; i < n; i++)
	{
		if (total[i] > max1)
		{
			max1 = total[i];
			indx = i;
		}
	}
	cout << indx + 1 << endl;
	return 0;
}