#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int n, k, i, j, temp1;
	cin >> n >> k;
	int a[n];
	int c[n - k + 1];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i < k - 1)
		{
			temp1 += a[i];
		}
		else if (i == k - 1)
		{
			temp1 += a[i];
			c[0] = temp1;
		}
		else
		{
			temp1 = temp1 + a[i] - a[i - k];
			c[i - k + 1] = temp1;
		}
	}
	int min1 = c[0];
	int indx = 0;
	for (i = 0; i <= n - k; i++)
	{
		if (c[i] < min1)
		{
			min1 = c[i];
			indx = i;
		}
	}
	cout << indx + 1 << endl;
	return 0;
}