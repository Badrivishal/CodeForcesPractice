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
		int n, i, j, chance, Alice, Bob;
		cin >> n;
		int a[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int sum, prev_sum;
		i = -1;
		j = n;
		chance = 0;
		Alice = 0;
		Bob = 0;
		sum = 0;
		prev_sum = 0;

		while (i + 1 < j)
		{
			//  cout << "hi" << i << " " << j << endl;
			if (chance % 2 == 0)
			{
				sum = 0;
				while (sum <= prev_sum && i + 1 < j)
				{
					// cout << "hi" << endl;
					sum += a[i + 1];
					i++;
				}
				Alice += sum;
				chance++;
				prev_sum = sum;
			}
			else
			{
				sum = 0;
				while (sum <= prev_sum && i < j - 1)
				{
					sum += a[j - 1];
					j--;
				}
				Bob += sum;
				chance++;
				prev_sum = sum;
			}
		}
		cout << chance << " " << Alice << " " << Bob << endl;
	}
	return 0;
}