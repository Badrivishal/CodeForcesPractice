#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

unsigned long long int num_ret(long long int x, long long int y)
{
	unsigned long long int a = (x + y - 2) * (x + y - 1) / 2;
	a += y;
	return a;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned long long int x1, x2, y1, y2, i;
		cin >> x1 >> y1 >> x2 >> y2;

		if (x1 == x2 || y1 == y2)
		{
			cout << 1 << endl;
			continue;
		}

		unsigned long long sum1, sum2;
		sum1 = sum2 = 0;
		for (i = x1; i < x2; i++)
		{
			sum1 += num_ret(i, y1);
		}
		for (i = y1; i <= y2; i++)
		{
			sum1 += num_ret(x2, i);
		}
		for (i = y1; i < y2; i++)
		{
			sum2 += num_ret(x1, i);
		}
		for (i = x1; i <= x2; i++)
		{
			sum2 += num_ret(i, y2);
		}
		// 		cout << sum2 << " " << sum1 << endl;
		cout << sum2 - sum1 + 1 << endl;
	}
	return 0;
}