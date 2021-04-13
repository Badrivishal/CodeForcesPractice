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
		long long int n, m;
		cin >> n >> m;

		if (n == 1)
		{
			cout << 0 << endl;
		}
		else if (n == 2)
		{
			cout << m << endl;
		}
		else if (n > 2)
		{
			cout << 2 * m << endl;
		}
	}
	return 0;
}