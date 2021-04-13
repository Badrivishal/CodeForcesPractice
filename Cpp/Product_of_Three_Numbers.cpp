#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
//#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, i, a = -1, b = -1;
		cin >> n;
		for (i = 2; i < sqrt(n); i++)
		{
			if (n % i == 0 && a == -1)
			{
				a = i;
				n = n / i;
			}
			else if (n % i == 0 && b == -1 && n / i != a && n / i != i)
			{
				b = i;
				n = n / b;
				break;
			}
		}
		if (b != -1 && a != -1)
		{
			cout << "YES" << endl;
			cout << a << " " << b << " " << n << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}