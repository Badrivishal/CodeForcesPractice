#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int t, i;
	cin >> t;
	for ( i = 0; i < t; i++)
	{
		int n, j, br_flag, old_p, old_c, new_p, new_c;
		br_flag = 0;
		cin >> n;
		cin >> old_p >> old_c;
		if (old_p < old_c)
		{
			br_flag = 1;
		}
		for ( j = 1; j < n; j++)
		{
			cin >> new_p >> new_c;
			if (new_p >= new_c)
			{
				if (new_p > old_p && new_c >= old_c)
				{
					if (new_p - old_p >= new_c - old_c)
					{
						old_p = new_p;
						old_c = new_c;
						continue;
					}
					else
					{
						br_flag = 1;
					}
				}
				else if (new_p == old_p && new_c == old_c)
				{
					old_p = new_p;
					old_c = new_c;
					continue;
				}
				else
				{
					br_flag = 1;
				}
			}
			else
			{
				br_flag = 1;
			}
		}
		if (br_flag == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}