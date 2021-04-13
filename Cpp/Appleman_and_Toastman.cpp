#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	long long int n, i, sum1 = 0;
	cin >> n;
	long long int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (i = n - 1; i >= 0; i--)
	{
		if (i == n - 1)
			sum1 += a[i] * (i + 1);
		else
			sum1 += a[i] * (i + 2);
		// 		cout << a[i] << " " << sum1 << endl ;
	}
	// 	cout << endl;
	cout << sum1 << endl;
	return 0;
}