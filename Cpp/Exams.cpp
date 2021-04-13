#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;


int main()
{
	int n, i, j;
	cin >> n;
	int a[n], b[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
			}
			else if (a[j] == a[j + 1])
			{
				if (b[j] > b[j + 1])
				{
					swap(a[j], a[j + 1]);
					swap(b[j], b[j + 1]);
				}
			}
		}
	}
	// 	for (i = 0; i < n; i++)
	// 	{
	//         cout << b[i] << " ";
	// 	}

	// 	cout << endl;
	int curr_ex = -1;
	for (i = 0; i < n; i++)
	{
		if (b[i] >= curr_ex)
		{
			curr_ex = b[i];
		}
		else
		{
			curr_ex = a[i];
		}
		// cout << curr_ex << endl;
	}
	cout << curr_ex << endl;
}