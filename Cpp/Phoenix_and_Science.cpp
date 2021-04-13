#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

long long int bin_search(vector <long long int> vec, int num)
{
	int i;
	for (i = 0; i < vec.size(); i++)
	{
		if (vec[i] > num)
		{
			return i - 1;
		}
	}
}


int main()
{
	long long int a, sum1;
	vector <long long int> vec, vec2;
	sum1 = 0;
	a = 1;
	while (sum1 < pow(10, 9))
	{
		sum1 += a;
		vec.push_back(sum1);
		vec2.push_back(a);
		// cout << sum1 << " ";
		a = a * 2;
	}
	// 		cout << endl;
	int t;
	cin >> t;
	while (t--)
	{
		int indx, out_cnt;
		long long int n, c;
		//vector <long long int> out;
		cin >> n;
		// cout << "n: " << n << endl;fflush(stdout);
		indx = bin_search(vec, n);
		//c = vec[indx];
		// 		cout << "c " << c << endl;fflush(stdout);
		c = vec[indx];
		n -= c;
		if (n)
		{
			out_cnt = indx + 1;
		}
		else
		{
			out_cnt = indx;
		}
		cout << out_cnt << endl;
		int i = 0;
		int flag = 1;
		for (i = 1; i <= indx; i++)
		{
			if (vec2[i] >= n && flag && n)
			{
				cout << n - vec2[i - 1] << " " << vec2[i] - n << " ";
				flag = 0;
			}
			else
			{
				cout << vec2[i] - vec2[i - 1] << " ";
			}
		}
		if (flag && n)
		{
			cout << n - vec2[indx];
		}
		cout << endl;
		// 		cout << "n: " << n << " indx: " << indx << " ele: " << vec2[indx] << endl;
		// 		while (vec[i] <= c)
		// 		{

		// 			if (i && n <= vec[i] - vec[i - 1] && flag && n)
		// 			{
		// 				//   cout << "-----" << endl;
		// 				out.push_back(n);
		// 				out.push_back(vec[i] - vec[i - 1]);
		// 				flag = 0;
		// 			}
		// 			else if (i)
		// 			{
		// 				out.push_back(vec[i] - vec[i - 1]);
		// 			}
		// 			else if (n <= vec[0] && flag && n)
		// 			{
		// 				out.push_back(n);
		// 				out.push_back(vec[0]);
		// 				flag = 0;
		// 			}
		// 			else
		// 			{
		// 				out.push_back(vec[0]);
		// 			}
		// 			i++;
		// 		}
		// 		if (flag && n)
		// 		{
		// 			out.push_back(n);
		// 		}
		// 		// 		cout << "out: " ;
		// 		// 		for (i = 0; i < out.size(); i++)
		// 		// 		{
		// 		// 			cout << out[i] << " ";
		// 		// 		}
		// 		// 		cout << endl;
		// 		cout << out.size() - 1 << endl;
		// 		for (i = 1; i < out.size(); i++)
		// 		{
		// 			cout << out[i] - out[i - 1] << " ";
		// 		}
		// 		cout << endl;
	}
	return 0;
}