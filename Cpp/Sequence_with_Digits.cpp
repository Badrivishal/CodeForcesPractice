#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

long long int get_val(long long int a)
{
	//long long a_cpy = a;
	int min1 = a % 10;
	int max1 = a % 10;
	while (a)
	{
		if (a % 10 > max1)
		{
			max1 = a % 10;
		}
		if (a % 10 < min1)
		{
			min1 = a % 10;
		}
		a /= 10;
	}
	return min1 * max1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int a1, k, i, mul, flag;
		cin >> a1 >> k;
		flag = 1;
		for (i = 0; i < k - 1 && flag; i++)
		{
			mul = get_val(a1);
			if (mul)
			{
				a1 += mul;
			}
			else
			{
				flag = 0;
			}
		}
		cout << a1 << endl;
	}
	return 0;
}