#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
	long long int i;
	long long int a[500000];
	for (i = 0; i < 500000; i++)
	{
		a[i] = 8 * i * i;
		if (i)
		{
			a[i] += a[i - 1];
		}
		// 		cout << a[i] << " ";
	}
	// 	cout << endl;
	int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		cout << a[n / 2] << endl;
	}
	return 0;
}