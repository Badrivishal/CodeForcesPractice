#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
	long long int n, i;
	cin >> n;
	long long int out = n;
	i = n - 1;
	while (i != 1)
	{
		for (i = n - 1; i > 0; i--)
		{
			if (n % i == 0)
			{
				out += i;
				n -= i;
				break;
			}
		}
	}
	cout << out << endl;
	return 0;
}