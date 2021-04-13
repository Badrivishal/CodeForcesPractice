#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int n, i, temp, max1 = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp > max1)
		{
			max1 = temp;
		}
	}
	cout << max1 << endl;
	return 0;
}