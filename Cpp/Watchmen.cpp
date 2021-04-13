#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
	int n, i, j, count1 = 0;
	cin >> n;
	pair <long long int, long long int> a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i].first == a[j].first || a[i].second == a[j].second)
			{
				count1++;
			}
		}
	}
	cout << count1 << endl;
	return 0;
}