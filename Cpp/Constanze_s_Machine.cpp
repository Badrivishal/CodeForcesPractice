#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

unsigned long long int fact(int n)
{
	// single line to find factorial 
	return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}


int main()
{
	string s;
	cin >> s;
	unsigned long long int n = s.length();
	unsigned long long int i, j;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'm' || s[i] == 'w')
		{
			cout << 0 << endl;
			return 0;
		}
	}
	unsigned long long int count1;
	pair <int, unsigned long long int> p;
	vector <pair <int, unsigned long long int>> vec;
	for (i = 0; i < n; i++)
	{
		count1 = 1;
		if (s[i] == 'u')
		{
			while (s[i + 1] == 'u')
			{
				count1++;
				i++;
			}
			p.first = 0;
			p.second = count1;
			if (count1 - 1)
				vec.push_back(p);
		}
		if (s[i] == 'n')
		{
			while (s[i + 1] == 'n')
			{
				count1++;
				i++;
			}
			p.first = 1;
			p.second = count1;
			if (count1 - 1)
				vec.push_back(p);
		}
	}
	unsigned long long int sum1 = 0, out = 1;
	for (i = 0; i < vec.size(); i++)
	{
		sum1 = 0;
		// cout << "vec: " << vec[i].first << " :" << vec[i].second << endl;
		for (j = 0; j <= floor(vec[i].second) / 2; j++)
		{
			sum1 += fact(vec[i].second - j) / (fact(vec[i].second - (2 * j)) * fact(j));
			sum1 %= ((int)pow(10, 9) + 7);
		}
		out *= sum1;
		out %= ((int)pow(10, 9) + 7);
		// 		cout << out << " " << sum1 << endl;
	}
	cout << out << endl;
	return 0;
}