#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int q, i, j;
	cin >> q;
	int a[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a[i] += (i * j) % 10;
		}
	}
	for (i = 0; i < q; i++)
	{
		int m_unit;
		long long int n, m, sum, temp1, temp2, temp3;
		sum = 0;
		cin >> n >> m;
		m_unit = m % 10;
		temp1 = n / (m * 10);
		temp2 = n % (m * 10);
		sum += temp1 * a[m_unit];
		temp3 = m;
		while (temp3 <= temp2)
		{
			sum += temp3 % 10;
			temp3 += m;
		}
		cout << sum << endl;
	}
	return 0;
}