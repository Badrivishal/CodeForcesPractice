#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int n, i, temp, br_flag;
	cin >> n;
	int n_25, n_50, n_100;
	n_25 = n_50 = n_100 = 0;
	br_flag = 0;
	for (i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 100)
		{
			if (n_25 >= 1 && n_50 >= 1)
			{
				n_25--;
				n_50--;
			}
			else if (n_25 >= 3)
			{
				n_25 -= 3;
			}
			else
			{
				br_flag = 1;
				break;
			}
			n_100++;
		}
		else if (temp == 50)
		{
			if (n_25 >= 1)
			{
				n_25--;
			}
			else
			{
				br_flag = 1;
				break;
			}
			n_50++;
		}
		else if (temp == 25)
		{
			n_25++;
		}
	}
	if (br_flag == 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
}