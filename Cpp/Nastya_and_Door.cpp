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
		int j, count1;
		int n, k;
		cin >> n >> k;
		int arr[n];
		int peaks[n];
		for (j = 0; j < n; j++)
		{
			peaks[j] = 0;
			cin >> arr[j];
			if (j >= 2)
			{
				if (arr[j - 2] < arr[j - 1] && arr[j - 1] > arr[j])
				{
					peaks[j - 1] = 1;
				}
			}
		}

		// 		for(j=0;j<n;j++)
		// 		{
		// 		    cout << peaks[j] << " ";
		// 		}
		// 		cout << endl;
		count1 = 0;
		j = 1;
		int indx = 0;
		while (j < k)
		{
			count1 += peaks[j - 1];
			j++;
			// 			cout << "c2: " << count1 << " " << j << endl;
		}
		int max1 = count1;
		while (j < n)
		{
			count1 += peaks[j - 1];
			if (peaks[j - k + 1] == 1)
			{
				count1--;
			}
			if (count1 > max1)
			{
				max1 = count1;
				indx = j - k + 1;
			}
			j++;
			// 			cout << "c1: "<< count1 << " " << j << endl;
		}
		cout << max1 + 1 << " " << indx + 1 << endl;
	}
	return 0;
}