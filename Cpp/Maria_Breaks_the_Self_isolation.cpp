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
		long long int n, i;
		cin >> n;
		long long int a[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + i);
		i = 0;
		for (i = n - 1; i >= 0; i--)
		{
			//  cout << a[i] << " " << i << endl;
			if (a[i] <= i + 1)
			{
				break;
			}
		}
		cout << i + 2 << endl;
	}
	return 0;
}