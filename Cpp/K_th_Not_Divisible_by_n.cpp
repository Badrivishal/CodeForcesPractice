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
		long long int n, k, out;
		cin >> n >> k;
		out = floor(k / (n - 1));
		out *= n;
		if (k % (n - 1))
		{
			out += (k % (n - 1));
		}
		else
		{
			out--;
		}
		cout << out << endl;
	}
	return 0;
}