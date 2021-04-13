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
		int n, i, j, k, out, temp1, flag;
		cin >> n;
		int a[n];
		vector <pair <int, int>> freq_vec;
		for (i = 0; i < n; i++)
		{
			cin >> temp1;
			flag = 1;
			for (j = 0; j < freq_vec.size(); j++)
			{
				if (freq_vec[j].first == temp1)
				{
					freq_vec[j].second += 1;
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				pair <int, int> temp_pair;
				temp_pair.first = temp1;
				temp_pair.second = 1;
				freq_vec.push_back(temp_pair);
			}
		}
		sort(freq_vec.begin(), freq_vec.end());
		out = 0;
		for (i = 0; i < freq_vec.size(); i++)
		{
			out += (freq_vec[i].second / freq_vec[i].first);
			if (i != freq_vec.size() - 1)
			{
				freq_vec[i + 1].second += freq_vec[i].second % freq_vec[i].first;
			}
		}
		// 		k = n - 1;
		//for (i = 0; i < freq_vec.size(); i++)
		//{
		//	cout << freq_vec[i].first << ": " << freq_vec[i].second << endl;
		//}
		cout << out << endl;
	}
	return 0;
}