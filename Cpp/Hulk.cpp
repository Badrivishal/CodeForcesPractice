#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <bits/stdc++.h> 
#include <iomanip>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	string s;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			s = s + "I hate ";
		}
		else
		{
			s = s + "I love ";
		}
		if (i < n - 1)
		{
			s = s + "that ";
		}
	}
	cout << s << "it" << endl;
	return 0;
}