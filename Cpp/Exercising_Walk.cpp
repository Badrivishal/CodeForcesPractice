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
		int l, r, d, u;
		int x, y, x1, y1, x2, y2;
		cin >> l >> r >> d >> u;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;

		if (x + (r - l) >= x1 && x + (r - l) <= x2 && y + (u - d) >= y1 && y + (u - d) <= y2)
		{
			if (((x2 - x1 == 0) && (l != 0 || r != 0)) || ((y2 - y1 == 0) && (u != 0 || d != 0)))
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
		else
		{

			cout << "NO" << endl;
		}




	}
	return 0;
}