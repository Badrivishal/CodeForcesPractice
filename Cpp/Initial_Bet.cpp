#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int i, n, temp;
	n = 0;
	for (i = 0; i < 5; i++)
	{
		cin >> temp;
		n += temp;
	}
	if (n % 5 == 0 && n > 0)
	{
		cout << n / 5;
	}
	else
	{
		cout << -1;
	}
	return 0;
}