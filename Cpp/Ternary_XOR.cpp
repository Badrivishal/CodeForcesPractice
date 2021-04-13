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
	for (i = 0; i < t; i++)
	{
		int n, j, temp1, temp2;
		vector <int>output1, output2;
		cin >> n;
		cin >> temp1;
		for (j = 0; j < n; j++)
		{
			temp2 = temp1 % 10;
			temp1 = temp1 / 10;

			// 			cout << "----------- " << temp2 << endl;
			if (j > n - 2)
			{
				switch (temp2)
				{
				case 0:
					output1.push_back(1);
					output2.push_back(2);
					break;
				case 1:
					output1.push_back(2);
					output2.push_back(2);
					break;
				case 2:
					output1.push_back(1);
					output2.push_back(1);
					break;
				default:
					break;
				}
			}
			else
			{
				switch (temp2)
				{
				case 0:
					output1.push_back(0);
					output2.push_back(0);
					break;
				case 1:
					output1.push_back(0);
					output2.push_back(1);
					break;
				case 2:
					output1.push_back(0);
					output2.push_back(2);
					break;
				default:
					break;
				}
			}
		}
		for (j = n - 1; j >= 0; j--)
		{
			cout << output1[j];
		}
		cout << endl;
		for (j = n - 1; j >= 0; j--)
		{
			cout << output2[j];
		}
		cout << endl;

	}
	return 0;
}