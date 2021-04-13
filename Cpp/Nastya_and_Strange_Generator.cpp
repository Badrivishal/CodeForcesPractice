#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

bool check(int* a, int n)
{
	// cout << "baas-------------"<< n << endl;
	bool ret = true;
	if (n > 1)
	{
		int i, j, num, br_flag = 0;
		for (i = 0; i < n; i++)
		{
			if (a[i] == 1)
			{
				num = i;
				// cout << "Hola " << i << endl;
				for (j = i + 1; j < n; j++)
				{
					if (a[j] != a[j - 1] + 1)
					{
						// cout << "Hii " << j << endl;
						br_flag = 1;
						break;
					}
				}
				if (br_flag == 1)
				{
					return false;
				}
				i--;
				while (i != -1)
				{
					a[i] -= a[n - 1];
					i--;
				}
				// cout << "arr: ";
				// for(i=0;i<num;i++)
				// {
				//     cout << a[i] << " ";
				// }
				// cout << endl;

				// cout << "---" << num << endl;
				ret = ret && check(a, num);
				break;
			}

		}
		// 		cout << "------"<< num << endl;
		return ret;
	}
	else
	{
		// cout << "Hoiiiiiiiiiiiiiiiiiiiii" << endl;
		return true;
	}
}

bool check_rev(a, n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] != n - i)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t, i, j;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int a[n];
		for (j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		if (check_rev)
		{
			cout << "Yes" << endl;
		}
		else
		{
			if (check(a, n))
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		
	}
	return 0;
}