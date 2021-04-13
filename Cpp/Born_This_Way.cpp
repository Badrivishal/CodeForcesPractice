#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

long long int bin_search(long long int* arr, long long int a, long long int start, long long int end)
{
	// cout << "!! " << start << " " << end << endl;
	if ((start + 1 == end || start == end))
	{
		if (arr[start] == a || arr[start] > a)
		{
			return start;
		}
		else if (arr[end] == a || arr[end] > a)
		{
			return end;
		}
		else
		{
			return -1;
		}
	}
	else if (arr[(start + end) / 2] == a)
	{
		return (start + end) / 2;
	}
	else if (arr[(start + end) / 2] > a)
	{
		end = (start + end) / 2;
		bin_search(arr, a, start, end);
	}
	else if (arr[(start + end) / 2] < a)
	{
		start = (start + end) / 2;
		bin_search(arr, a, start, end);
	}
}

int main()
{
	long long int n, m, t_a, t_b, k, i, j, x, t1, t2;
	cin >> n >> m >> t_a >> t_b >> k;
	vector <long long int> time1;
	if (n <= k || m <= k)
	{
		cout << -1 << endl;
		return 0;
	}
	long long int a_b[n];
	long long int b_c[m];
	for (i = 0; i < n; i++)
	{
		cin >> a_b[i];
	}
	for (i = 0; i < m; i++)
	{
		cin >> b_c[i];
	}
	for (x = 0; x <= k; x++)
	{
		t1 = a_b[x];
		t1 += t_a;
		// 		cout << "Hii" << t1 << endl;
		// 		cout << bin_search(b_c, t1, 0, m-1) << " " << b_c[bin_search(b_c, t1, 0, m-1)] << endl;
		int indx = bin_search(b_c, t1, 0, m - 1);
		if (indx != -1 && indx + k - x < m)
		{
			t2 = b_c[indx + k - x] + t_b;
			time1.push_back(t2);
		}
		else
		{
			cout << -1 << endl;
			return 0;
		}
		// 		t2 = b_c[bin_search(b_c, t1, 0, m-1)+(k-x)] + t_b;
		// 		time1.push_back(t2);
	}
	long long int max1 = 0;
	for (i = 0; i < time1.size(); i++)
	{
		// cout << "t "<< time1[i] << endl;
		if (time1[i] > max1)
		{
			max1 = time1[i];
		}
	}
	cout << max1 << endl;

	return 0;
}