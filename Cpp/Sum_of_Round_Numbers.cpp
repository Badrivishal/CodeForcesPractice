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
		vector <int> vec;
		int n, val;
		cin >> n;
		int i = 0;
		while (n)
		{
			val = n % 10;
			if (val)
			{
				vec.push_back(val * pow(10, i));
			}
			n = n / 10;
			i++;
		}
		cout << vec.size() << endl;
		for (i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
		cout << endl;
	}
	return 0;
}