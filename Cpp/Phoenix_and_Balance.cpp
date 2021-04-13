#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int i;
	unsigned long long int sum1[30];
	sum1[0] = 0;
	for (i = 1; i <= 15; i++)
	{
		sum1[i] = pow(2, i);
		sum1[i] = sum1[i] + sum1[i - 1];
		// 		cout << sum1[i] << " ";
	}
	// 	cout << endl;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		unsigned long long int out1, out2;
		out1 = sum1[(n / 2) - 1] + pow(2, n);
		out2 = pow(2, n + 1) - 2;
		out2 = out2 - out1;
		// 		cout << "debug: " << out1 << " " << out2 << endl;
		cout << out1 - out2 << endl;
	}
	return 0;
}