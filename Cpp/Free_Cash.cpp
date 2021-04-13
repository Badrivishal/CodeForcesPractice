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
	int h1, m1, h2, m2, count1, max1;
	cin >> h1 >> m1;
	count1 = max1 = 1;
	for (i = 1; i < t; i++)
	{
		cin >> h2 >> m2;
		if (h1 == h2 && m1 == m2)
		{
			//  cout << "Hi" << h2 << m2 << endl;
			count1++;
		}
		else
		{
			count1 = 1;
		}
		max1 = max(max1, count1);
		h1 = h2;
		m1 = m2;
	}
	cout << max1 << endl;
	return 0;
}