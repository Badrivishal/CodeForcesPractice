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
		int n, pow1, del1, count1 = 0;
		cin >> n;
		while (n > 1)
		{
			pow1 = floor(log(n) / log(2));
			del1 = pow(2, pow1 + 1) - 1;
			if (del1 > n)
			{
				del1 = pow(2, pow1) - 1;
			}
			if (del1 > 3)
				n -= del1;
			else
				n -= 2;
			count1++;
			// 			cout << pow1 << " " << n << " "<< del1 << endl;
		}
		cout << count1 << endl;
	}
	return 0;
}