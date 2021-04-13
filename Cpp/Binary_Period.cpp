#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int i, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		char temp1;
		int k, j, count_0, count_1;
		k = 0;
		count_0 = count_1 = 0;
		string a;
		cin >> a;
		char output[2 * a.length()];
		int same_flag = 0;
		for (j = 0; j < a.length(); j++)
		{
			if (a[j] != a[0])
				same_flag = 1;
			if (a[j] == '0')
			{
				count_0++;
			}
			else
			{
				count_1++;
			}
		}
		//cout << "----" << count_1 << " " << count_0 << endl;
		if (same_flag == 0)
		{
			cout << a << endl;
		}
		else
		{
			for (j = 0; j < a.length(); j++)
			{
				if (a[j] == '0')
				{
					if (a[j + 1] == '0')
					{
						output[k] = '0';
						output[k + 1] = '1';
						k += 2;
					}
					else
					{
						output[k] = '0';
						k++;
					}
				}
				else if (a[j] == '1')
				{
					if (a[j + 1] == '1')
					{
						output[k] = '1';
						output[k + 1] = '0';
						k += 2;
					}
					else
					{
						output[k] = '1';
						k++;
					}
				}
			}
			int temp2 = k;
			for (k = 0; k < temp2; k++)
				cout << output[k];
			cout << endl;
		}
	}
	return 0;
}