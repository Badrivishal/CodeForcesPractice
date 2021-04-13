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
		long long int n, k, i, flag;
		vector <long long int> vec;
		cin >> n >> k;
		flag = 0;
		if (k >= n)
		{
			cout << 1 << endl;
			continue;
		}
		if (n % 2 == 0 && k >= n / 2)
		{
			cout << 2 << endl;
			continue;
		}
		for (i = 1; i <= sqrt(n); i++)
		{
			//  cout << "i: " << i << endl;
			if (n % i == 0)
			{
				if (n / i <= k)
				{
					flag = 1;
					break;
				}
				else
				{
					vec.push_back(n / i);
				}
			}
		}
		if (flag)
		{
			cout << i << endl;
		}
		else
		{
			if (vec.size() >= 1)
			{
				if (n / vec[vec.size() - 1] <= k)
				{
					cout << vec[vec.size() - 1] << endl;
					flag = 1;
				}
			}
			if (k >= 1 && flag == 0)
			{
				cout << n << endl;
			}
		}
	}
	return 0;
}