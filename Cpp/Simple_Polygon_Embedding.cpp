#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

#define PI 3.14159265359 

using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		n = 2 * n;
		double out;
		out = cos(PI / n);
		// 		cout << out <<endl;
		out /= sin(PI / n);
		printf("%lf\n", out);
	}
	return 0;
}